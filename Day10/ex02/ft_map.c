/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:55:05 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/20 20:27:33 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*tab2;
	int		i;

	tab2 = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		tab2[i] = f(tab[i]);
	return (tab2);
}
