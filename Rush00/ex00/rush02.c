/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 09:36:06 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/10 19:09:29 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_block(int x, int y, int line, int coln)
{
	if (line == y && coln == x)
		ft_putchar('C');
	else
	{
		if (line == 1 && coln == x)
			ft_putchar('A');
		else
		{
			if (line == y && coln == 1)
				ft_putchar('C');
			else
			{
				if (line == 1 || line == y || coln == 1 || coln == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		}
	}
}

void	rush(int x, int y)
{
	int		line;
	int		coln;

	if (x == 0 || y == 0)
		return ;
	line = 0;
	coln = 0;
	while (++line <= y)
	{
		while (++coln <= x)
		{
			if (line == 1 && coln == 1)
				ft_putchar('A');
			else
			{
				if ((x == 1 && line == y) || (y == 1 && coln == x))
					ft_putchar('C');
				else
					ft_rush_block(x, y, line, coln);
			}
		}
		ft_putchar('\n');
		coln = 0;
	}
}
