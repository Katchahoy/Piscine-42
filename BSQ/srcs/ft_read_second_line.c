/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_second_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:36:13 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/27 23:00:44 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_create_bsq(t_bsq *bsq)
{
	int		i;

	if (!(bsq->input = (char**)malloc(sizeof(char*) * (bsq->nb_lines))))
		return (0);
	i = 0;
	while (i < bsq->nb_lines)
	{
		if (!(bsq->input[i] = (char*)malloc(sizeof(char) * (bsq->nb_cols + 2))))
			return (0);
		bsq->input[i++][bsq->nb_cols + 1] = '\0';
	}
	return (1);
}

char	*ft_realloc(char *old, int size)
{
	char *buf;

	if (!(buf = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	buf[size] = '\0';
	buf = ft_strcpy(buf, old);
	free(old);
	return (buf);
}

void	ft_init_parse_buf(t_bsq *bsq, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	ft_parse_buf(bsq, str, &i, &j);
}

int		ft_read_second_line(t_bsq *bsq, int fd)
{
	int		ret;
	int		i;
	char	buf;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	str[BUF_SIZE] = '\0';
	while ((ret = read(fd, &buf, 1)) > 0 && buf != '\n' && i < 2147483647)
	{
		str[i] = buf;
		i++;
		if (i % BUF_SIZE == 0)
			if (!(str = ft_realloc(str, i * 2)))
				return (0);
	}
	str[i] = '\n';
	bsq->nb_cols = i;
	if (!(ft_create_bsq(bsq)))
		return (0);
	if (!ft_init_tab(bsq))
		return (0);
	ft_init_parse_buf(bsq, str);
	return (1);
}
