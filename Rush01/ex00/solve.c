/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:03:03 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/17 23:16:11 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_nb_filled(t_sudoku sudoku)
{
	int		i;
	int		j;
	int		nb_filled;

	nb_filled = 0;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (sudoku.board[i][j][0] != '0')
				nb_filled++;
		}
	}
	return (nb_filled);
}

void	ft_save_board(t_sudoku *sudoku)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			sudoku->saved_board[i][j] = sudoku->board[i][j][0];
	}
}

int		ft_test_val(t_sudoku *sudoku, int line, int col, char val)
{
	char	*tab;

	tab = sudoku->board[line][col];
	if (tab[0] != '0')
		return (ft_solve(sudoku, line + (col + 1) / 9, (col + 1) % 9, '1'));
	tab[0] = val;
	if (!ft_check_doublon(*sudoku, line, col))
	{
		sudoku->nb_filled++;
		if (ft_solve(sudoku, line + (col + 1) / 9, (col + 1) % 9, '1'))
			return (1);
		else
		{
			sudoku->nb_filled--;
			tab[0] = '0';
			return (ft_solve(sudoku, line, col, val + 1));
		}
	}
	else
	{
		tab[0] = '0';
		return (ft_solve(sudoku, line, col, val + 1));
	}
}

int		ft_solve(t_sudoku *sudoku, int line, int col, char val)
{
	if (sudoku->nb_filled == 81)
	{
		sudoku->count_sol++;
		ft_save_board(sudoku);
		return (1);
	}
	if (line >= 9)
		return (0);
	if (val > '9')
		return (0);
	ft_test_val(sudoku, line, col, val);
	return (0);
}
