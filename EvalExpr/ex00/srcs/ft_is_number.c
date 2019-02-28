/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:30:44 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 20:37:02 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_is_numeric(char *str)
{
	if (!*str)
		return (1);
	if (!ft_is_digit(*str))
		return (0);
	return (ft_is_numeric(str + 1));
}

int		ft_is_number(char *str)
{
	if (!*str)
		return (1);
	if (*str == '+' || *str == '-')
		str++;
	return (ft_is_numeric(str));
}
