/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:59:04 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/19 15:20:12 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}

char				*ft_strncpy(char *dst, char *src, int n)
{
	int		i;

	i = -1;
	while (++i < n && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*stock;
	int					i;

	stock = (struct s_stock_par*)malloc(sizeof(struct s_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = (char*)malloc(sizeof(char) * (1 + stock[i].size_param));
		ft_strncpy(stock[i].copy, av[i], stock[i].size_param);
		stock[i].tab = ft_split_whitespaces(av[i]);
	}
	stock[i].str = (char*)0;
	return (stock);
}
