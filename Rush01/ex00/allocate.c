/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:45:08 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/17 23:18:15 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_allocate_sudoku(t_sudoku *sudoku)
{
	int		i;
	int		j;

	sudoku->board = (char***)malloc(sizeof(char**) * 9);
	sudoku->saved_board = (char**)malloc(sizeof(char*) * 9);
	i = -1;
	while (++i < 9)
	{
		sudoku->board[i] = (char**)malloc(sizeof(char*) * 9);
		sudoku->saved_board[i] = (char*)malloc(sizeof(char) * 9);
		j = -1;
		while (++j < 10)
			sudoku->board[i][j] = (char*)malloc(sizeof(char) * 10);
	}
}

void	ft_free_sudoku(t_sudoku *sudoku)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 10)
			free(sudoku->board[i][j]);
		free(sudoku->board[i]);
		free(sudoku->saved_board[i]);
	}
	free(sudoku->board);
	free(sudoku->saved_board);
}
