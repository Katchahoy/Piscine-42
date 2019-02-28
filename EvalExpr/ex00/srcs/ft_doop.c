/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 12:06:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 21:21:19 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_doop(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}

int		ft_op_pre(char c)
{
	if (c == '\0')
		return (2147483647);
	if (c == '+' || c == '-')
		return (1);
	if (c == '*' || c == '/' || c == '%')
		return (2);
	return (0);
}

int		ft_calculate(int a, int b, char op)
{
	if (op == '+')
		return (ft_doop(a, b, &ft_add));
	if (op == '-')
		return (ft_doop(a, b, &ft_sub));
	if (op == '*')
		return (ft_doop(a, b, &ft_mul));
	if (op == '/')
		return (ft_doop(a, b, &ft_div));
	if (op == '%')
		return (ft_doop(a, b, &ft_mod));
	return (0);
}
