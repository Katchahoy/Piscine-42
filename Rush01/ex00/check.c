/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:24:26 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/17 23:18:00 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_doublon(t_sudoku sudoku, int ligne, int colonne)
{
	int		cpt;
	int		i;
	char	*tab;

	tab = (char*)malloc(sizeof(char) * 9);
	cpt = 0;
	i = -1;
	ft_squ_to_line(sudoku, ligne, colonne, tab);
	while (++i < 9)
	{
		if (sudoku.board[ligne][colonne][0] == sudoku.board[ligne][i][0])
			cpt++;
		if (sudoku.board[ligne][colonne][0] == sudoku.board[i][colonne][0])
			cpt++;
		if (sudoku.board[ligne][colonne][0] == tab[i])
			cpt++;
	}
	free(tab);
	return (cpt != 3);
}

int		ft_doublon(t_sudoku sudoku)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (sudoku.board[i][j][0] != '0')
			{
				if (ft_check_doublon(sudoku, i, j))
					return (1);
			}
		}
	}
	return (0);
}
