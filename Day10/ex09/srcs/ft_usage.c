/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 08:51:57 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:32:03 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_t_opp.h"
#include "doop.h"
#include "ft_opp.h"

long	ft_usage(long a, long b)
{
	int		i;

	(void)a;
	(void)b;
	ft_putstr("error : only [ ");
	i = -1;
	while (++i < 6 && g_opptab[i])
	{
		ft_putstr(g_opptab[i][0]);
		ft_putchar(' ');
	}
	ft_putstr("] are accepted.");
	return (0);
}
