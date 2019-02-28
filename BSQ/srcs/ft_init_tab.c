/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 13:31:15 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 22:30:01 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include "../includes/ft.h"

int		ft_init_tab(t_bsq *bsq)
{
	int		i;

	if (!(bsq->tab = (int**)malloc(sizeof(int*) * 2)))
		return (0);
	i = 0;
	while (i < 2)
		if (!((bsq->tab[i++]) = (int*)malloc(sizeof(int) * bsq->nb_cols)))
			return (0);
	i = 0;
	while (i < bsq->nb_cols)
		bsq->tab[1][i++] = 0;
	return (1);
}
