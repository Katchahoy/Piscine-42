/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 10:39:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/11 10:39:54 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_queens(int *queens_pos)
{
	int		i;

	i = -1;
	while (++i < 8)
		ft_putchar(queens_pos[i] + 48);
	ft_putchar('\n');
}

int		ft_is_free(int row, int col, int *queens_pos)
{
	int		i;
	int		j;
	int		dist_i;
	int		dist_j;

	i = -1;
	while (++i < 8)
	{
		dist_i = (row - i > 0) ? row - i : i - row;
		if ((j = queens_pos[i]) > 0)
		{
			dist_j = (col - j > 0) ? col - j : j - col;
			if (i == row
				|| j == col
				|| dist_i == dist_j)
				return (0);
		}
	}
	return (1);
}

int		ft_recursive_queens_puzzle(int *queens_pos, int nb_queens)
{
	int		i;

	if (nb_queens == 8)
		ft_print_queens(queens_pos);
	else
	{
		i = -1;
		while (++i < 8)
		{
			if (ft_is_free(nb_queens, i + 1, queens_pos))
			{
				queens_pos[nb_queens] = i + 1;
				if (ft_recursive_queens_puzzle(queens_pos, nb_queens + 1))
					return (1);
				queens_pos[nb_queens] = 0;
			}
		}
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int		queens_pos[8];
	int		i;

	i = -1;
	while (++i < 8)
		queens_pos[i] = 0;
	(ft_recursive_queens_puzzle(queens_pos, 0));
}
