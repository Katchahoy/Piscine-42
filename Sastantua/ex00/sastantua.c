/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 10:29:28 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/10 12:46:09 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_abs(int nb)
{
	return (nb > 0 ? nb : -nb);
}

int		ft_line_width(int floor, int line)
{
	if (floor == 1 && line == 1)
		return (1);
	if (line == 1)
		return (ft_line_width(floor - 1, floor + 1) + 2 * (2 + floor / 2));
	return (2 + ft_line_width(floor, line - 1));
}

void	ft_print_line(int size, int center, int floor, int line)
{
	int		line_width;
	int		i;

	line_width = ft_line_width(floor, line);
	i = 0;
	while (++i < center - line_width / 2 - 1)
		ft_putchar(' ');
	ft_putchar('/');
	while (++i < center + line_width / 2 + 1)
	{
		if (floor == size && size + 2 - line < size - 1 + size % 2
			&& ft_abs(center - i) <= (size - 1 + size % 2) / 2)
		{
			if (size - 1 + size % 2 >= 5
				&& size + 2 - line == (size - 1 + size % 2) / 2
				&& i == center + (size - 1 + size % 2) / 2 - 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int		center;
	int		floor;
	int		line;

	if (size <= 0)
		return ;
	center = (ft_line_width(size, size + 2) + 2) / 2 + 1;
	floor = 0;
	while (++floor <= size)
	{
		line = 0;
		while (++line <= floor + 2)
			ft_print_line(size, center, floor, line);
	}
}
