/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:05:06 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:20:19 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putnbr(long nb)
{
	unsigned long	num;

	if (nb < 0)
		ft_putchar('-');
	num = (nb < 0) ? -nb : nb;
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}
