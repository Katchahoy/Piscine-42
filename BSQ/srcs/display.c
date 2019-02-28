/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 10:18:59 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/27 16:49:00 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_display_error(void)
{
	write(2, "map error\n", 10);
}

void	ft_display_solution(t_bsq *bsq)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < bsq->nb_lines)
	{
		j = 0;
		while (j < bsq->nb_cols)
		{
			if (i > bsq->i_max - bsq->size_max && i <= bsq->i_max
					&& j > bsq->j_max - bsq->size_max && j <= bsq->j_max)
				ft_putchar(bsq->char_full);
			else
				ft_putchar(bsq->input[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
