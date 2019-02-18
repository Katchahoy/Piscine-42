/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 09:36:06 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/10 19:08:20 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_block(int x, int y, int line, int coln)
{
	if (line == y && coln == x)
		ft_putchar('o');
	else
	{
		if ((line == 1 && coln == x)
			|| (line == y && coln == 1))
			ft_putchar('o');
		else
		{
			if (line == 1 || line == y)
				ft_putchar('-');
			else
			{
				if (coln == 1 || coln == x)
					ft_putchar('|');
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
				ft_putchar('o');
			else
			{
				if ((x == 1 && line == y) || (y == 1 && coln == x))
					ft_putchar('o');
				else
					ft_rush_block(x, y, line, coln);
			}
		}
		ft_putchar('\n');
		coln = 0;
	}
}
