/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:01:59 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/14 18:37:36 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_nat;

	nb_nat = (nb < 0) ? -nb : nb;
	if (nb < 0)
		ft_putchar('-');
	if (nb_nat > 9)
		ft_putnbr(nb_nat / 10);
	ft_putchar(nb_nat % 10 + '0');
}

void	ft_puthour12(int hour)
{
	hour = (hour > 23) ? (hour - 24) : hour;
	ft_putnbr((hour % 12 != 0) ? (hour % 12) : 12);
	ft_putstr(".00 ");
	ft_putchar((hour / 12 > 0) ? 'P' : 'A');
	ft_putstr(".M.");
}

void	ft_takes_place(int hour)
{
	int		hour_end;

	hour_end = hour + 1;
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_puthour12(hour);
	ft_putstr(" AND ");
	ft_puthour12(hour_end);
	ft_putchar('\n');
}
