/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:56:20 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:21:31 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "doop.h"

long	ft_doop(long nb1, long nb2, long (*f)(long, long))
{
	return (f(nb1, nb2));
}

long	ft_op_index(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '*')
		return (2);
	if (c == '/')
		return (3);
	if (c == '%')
		return (4);
	return (-1);
}

void	ft_calculate(long nb1, long nb2, long op_index)
{
	long		(*f[5])(long, long);

	if (nb2 == 0 && (op_index == 3 || op_index == 4))
	{
		if (op_index == 3)
			ft_putstr("Stop : division by zero\n");
		if (op_index == 4)
			ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	ft_putnbr(ft_doop(nb1, nb2, f[op_index]));
}

int		main(int ac, char **av)
{
	int		op_index;
	long	nb1;
	long	nb2;

	if (ac == 4)
	{
		nb1 = ft_atoi(av[1]);
		op_index = ft_op_index(*av[2]);
		nb2 = ft_atoi(av[3]);
		if (ft_strlen(av[2]) == 1 && op_index != -1)
			ft_calculate(nb1, nb2, op_index);
		else
			ft_putnbr(0);
	}
	return (0);
}
