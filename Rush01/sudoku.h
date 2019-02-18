/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quegonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 21:45:36 by quegonza          #+#    #+#             */
/*   Updated: 2019/02/17 23:16:28 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_sudoku
{
	char	***board;
	char	**saved_board;
	int		nb_filled;
	int		count_sol;

}				t_sudoku;

int				ft_create_board(t_sudoku *sudoku, char **argv);
int				ft_nb_filled(t_sudoku sudoku);
int				ft_solve(t_sudoku *sudoku, int line, int col, char val);
int				ft_check_doublon(t_sudoku sudoku, int line, int col);
int				ft_doublon(t_sudoku sudoku);
int				ft_fill_if_good(char *box);

char			*ft_squ_to_line(t_sudoku sudoku, int line, int col, char *tab);

void			ft_allocate_sudoku(t_sudoku *sudoku);
void			ft_free_sudoku(t_sudoku *sudoku);
void			ft_save_board(t_sudoku *sudoku);
void			ft_putchar(char c);
void			ft_init_case_vide(t_sudoku *sudoku);
void			ft_update(t_sudoku *sudoku, int line, int col, int val);
void			ft_fill_board(t_sudoku *sudoku);
void			ft_print_board(t_sudoku sudoku);

#endif
