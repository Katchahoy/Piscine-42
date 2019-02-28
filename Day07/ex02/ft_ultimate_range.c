/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:28:45 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 17:27:28 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min >= max)
		*range = NULL;
	else
	{
		if (!(*range = (int*)malloc(sizeof(int) * (max - min))))
			return (0);
		i = 0;
		while (i < max - min)
		{
			range[0][i] = min + i;
			i++;
		}
	}
	return (*range != NULL ? max - min : 0);
}
