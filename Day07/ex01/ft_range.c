/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:09:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 17:26:59 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		*range_0;
	int		i;

	if (max <= min)
		return (0);
	if (!(range = (int*)malloc((max - min) * sizeof(int))))
		return ((int*)0);
	range_0 = range;
	i = min;
	while (i < max)
		*range++ = i++;
	return (range_0);
}
