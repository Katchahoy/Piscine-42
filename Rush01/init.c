/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:50:33 by alatour           #+#    #+#             */
/*   Updated: 2019/02/17 23:20:48 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_init_case_vide(t_sudoku *sudoku)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			sudoku->board[i][j][0] = '0';
			k = 0;
			while (++k < 10)
				sudoku->board[i][j][k] = 1;
		}
	}
}

void	ft_update(t_sudoku *sudoku, int line, int col, int val)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
	{
		sudoku->board[i][col][val] = 0;
		sudoku->board[line][i][val] = 0;
	}
	i = (line / 3) * 3 - 1;
	j = (col / 3) * 3 - 1;
	while (++i < (line / 3) * 3 + 3)
	{
		while (++j < (col / 3) * 3 + 3)
			sudoku->board[i][j][val] = 0;
	}
}

int		ft_create_board(t_sudoku *sudoku, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < 10)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j > 9 || (argv[i][j] < '1' && argv[i][j] != '.')
				|| argv[i][j] > '9')
				return (0);
			if (argv[i][j] != '.')
			{
				sudoku->board[i - 1][j][0] = argv[i][j];
				ft_update(sudoku, i - 1, j, argv[i][j] - '0');
			}
			j++;
		}
	}
	return (!ft_doublon(*sudoku));
}

char	*ft_squ_to_line(t_sudoku sudoku, int line, int col, char *tab)
{
	int i;
	int cpt_line;
	int cpt_col;

	cpt_col = 0;
	cpt_line = 0;
	i = -1;
	while (++i < 9)
	{
		cpt_line = ((line / 3) * 3) + (i / 3);
		cpt_col = ((col / 3) * 3) + (i % 3);
		tab[i] = sudoku.board[cpt_line][cpt_col][0];
	}
	return (tab);
}
