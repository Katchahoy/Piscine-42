/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:38:40 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/19 15:20:23 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void				ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void				ft_putnbr(int nb)
{
	unsigned int	nb_nat;

	nb_nat = (nb < 0) ? -nb : nb;
	if (nb < 0)
		ft_putchar('-');
	if (nb_nat > 9)
		ft_putnbr(nb_nat / 10);
	ft_putchar(nb_nat % 10 + '0');
}

void				ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
