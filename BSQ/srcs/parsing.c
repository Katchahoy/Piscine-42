/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 08:49:24 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 22:30:17 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= c && b <= a)
		return (b);
	return (c);
}

void	ft_debug(char *msg, int n)
{
	ft_putstr(msg);
	ft_putnbr(n);
	ft_putchar('\n');
}

int		ft_parse_first_line(t_bsq *bsq, char *str, int size)
{
	if (!ft_is_printable(bsq->char_full = str[size - 1])
		|| !ft_is_printable(bsq->char_obst = str[size - 2])
		|| !ft_is_printable(bsq->char_empt = str[size - 3]))
		return (0);
	if (bsq->char_full == bsq->char_empt
		|| bsq->char_full == bsq->char_obst
		|| bsq->char_empt == bsq->char_obst)
		return (0);
	str[size - 3] = '\0';
	if (!ft_is_numeric(str))
		return (0);
	if ((bsq->nb_lines = ft_atoi(str)) == 0)
		return (0);
	bsq->size_max = 0;
	return (1);
}

int		ft_parse_bsq(t_bsq *bsq, int fd)
{
	if (!ft_init_bsq(bsq, fd))
		return (0);
	if (!ft_read_second_line(bsq, fd))
		return (0);
	if (!ft_read_line(fd, bsq))
		return (0);
	ft_display_solution(bsq);
	return (1);
}
