/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quegonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:23:57 by quegonza          #+#    #+#             */
/*   Updated: 2019/02/17 23:18:36 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_fill_if_good(char *box)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (++i < 10)
		if (box[i])
			compteur++;
	if (compteur == 1)
	{
		i = 0;
		while (++i < 10)
			if (box[i])
				box[0] = i + '0';
		return (i);
	}
	return (0);
}

void	ft_fill_board(t_sudoku *sudoku)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (sudoku->board[i][j][0] == '0')
			{
				if (ft_fill_if_good(sudoku->board[i][j]))
				{
					ft_update(sudoku, i, j, sudoku->board[i][j][0] - '0');
					sudoku->nb_filled++;
					i = -1;
					break ;
				}
			}
		}
	}
}
