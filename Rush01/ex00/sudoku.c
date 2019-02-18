/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 10:39:08 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/17 23:16:42 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	t_sudoku	sudoku;

	if (argc == 10)
	{
		ft_allocate_sudoku(&sudoku);
		ft_init_case_vide(&sudoku);
		sudoku.count_sol = 0;
		if (ft_create_board(&sudoku, argv))
		{
			if (ft_nb_filled(sudoku) >= 17)
			{
				ft_fill_board(&sudoku);
				sudoku.nb_filled = ft_nb_filled(sudoku);
				ft_solve(&sudoku, 0, 0, '1');
				if (sudoku.count_sol == 1)
				{
					ft_print_board(sudoku);
					return (0);
				}
			}
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
