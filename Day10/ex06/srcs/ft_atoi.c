/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 16:02:57 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:13:01 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long		ft_is_space(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\t'
		|| c == '\r'
		|| c == '\f'
		|| c == '\v');
}

long		ft_atoi(char *str)
{
	long		nb;
	long		sign;
	long		i;

	nb = 0;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	return (nb * sign);
}
