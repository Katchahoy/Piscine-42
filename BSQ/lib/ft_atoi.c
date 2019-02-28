/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:53:28 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/26 14:44:30 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		sign;

	nb = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - '0';
	return (sign * nb);
}
