/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:14:01 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/25 18:21:30 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = -nb;
	}
	else
		u_nb = nb;
	if (u_nb < 10)
		ft_putchar(u_nb + 48);
	else if (u_nb >= 10)
	{
		ft_putnbr(u_nb / 10);
		ft_putnbr(u_nb % 10);
	}
}
