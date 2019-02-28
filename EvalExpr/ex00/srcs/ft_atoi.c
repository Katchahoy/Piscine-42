/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:22:40 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 21:47:37 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_is_space(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\t'
		|| c == '\r'
		|| c == '\f'
		|| c == '\v');
}

int		ft_atoi(char *str)
{
	int		nb;
	int		sign;

	nb = 0;
	while (ft_is_space(*str))
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_is_digit(*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}
