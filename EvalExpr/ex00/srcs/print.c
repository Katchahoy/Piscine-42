/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:33:43 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 21:48:42 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
		ft_putchar('-');
	num = (nb < 0) ? -nb : nb;
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}
