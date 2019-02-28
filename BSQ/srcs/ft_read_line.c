/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 13:34:39 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/27 22:50:42 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_manage_char_empty(t_bsq *bsq, int i, int j)
{
	if (bsq->input[i][j] == bsq->char_empt)
	{
		if (j > 0)
			bsq->tab[i % 2][j] = ft_min(bsq->tab[i % 2][j - 1],
					bsq->tab[(i + 1) % 2][j - 1],
					bsq->tab[(i + 1) % 2][j]) + 1;
		else
		{
			bsq->tab[i % 2][j] = 1;
		}
		if (bsq->tab[i % 2][j] > bsq->size_max)
		{
			bsq->size_max = bsq->tab[i % 2][j];
			bsq->i_max = i;
			bsq->j_max = j;
		}
	}
}

int		ft_parse_buf(t_bsq *bsq, char *buf, int *i, int *j)
{
	int		k;

	k = -1;
	while ((bsq->input[*i][*j] = buf[++k]))
	{
		if (bsq->input[*i][*j] == bsq->char_empt)
			ft_manage_char_empty(bsq, *i, *j);
		else if (bsq->input[*i][*j] == bsq->char_obst)
			bsq->tab[*i % 2][*j] = 0;
		else if (bsq->input[*i][*j] == '\n')
		{
			if (*j != bsq->nb_cols)
				return (0);
		}
		else
			return (0);
		if (++(*j) > bsq->nb_cols)
		{
			*j = 0;
			if (++(*i) >= bsq->nb_lines)
				return (!buf[k + 1]);
		}
	}
	return (1);
}

int		ft_read_line(int fd, t_bsq *bsq)
{
	int		i;
	int		j;
	int		rd;
	char	buf[BUF_SIZE + 1];

	i = 1;
	j = 0;
	while ((rd = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		if (!ft_parse_buf(bsq, buf, &i, &j))
			return (0);
	}
	return (1);
}
