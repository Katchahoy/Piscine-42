/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomoulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:38:32 by lomoulin          #+#    #+#             */
/*   Updated: 2019/02/24 23:10:43 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\r');
}

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		sign;

	nb = 0;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	sign = str[i] == '-' ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i] - '0';
	return (nb * sign);
}
