/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 10:26:48 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 23:26:09 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "ft.h"

# define BUF_SIZE 256

typedef struct s_bsq	t_bsq;
typedef struct s_slice	t_slice;

struct					s_bsq
{
	int					**tab;
	char				**input;
	int					nb_lines;
	int					nb_cols;
	char				char_empt;
	char				char_full;
	char				char_obst;
	int					size_max;
	int					i_max;
	int					j_max;
};

struct					s_slice
{
	char				**array;
	int					cap;
	int					len;
};

int						ft_init_bsq(t_bsq *bsq, int fd);
int						ft_min(int a, int b, int c);
int						ft_parse_first_line(t_bsq *bsq, char *str, int size);
int						ft_find_line(char *str);
int						ft_parse_bsq(t_bsq *bsq, int fd);
int						ft_feed_table(t_bsq *bsq, int i_lin);
int						ft_read_second_line(t_bsq *bsq, int fd);
int						ft_init_tab(t_bsq *bsq);
int						ft_read_line(int fd, t_bsq *bsq);
int						ft_parse_buf(t_bsq *bsq, char *buf, int *i, int *j);

void					ft_split(char *str, t_bsq *bsq);
void					ft_debug(char *str, int nb);
void					ft_display_error(void);

t_slice					*ft_create_slice(void);

void					ft_debug(char *msg, int nb);
void					ft_split(char *str, t_bsq *bsq);
void					ft_display_solution(t_bsq *bsq);
void					ft_free_bsq(t_bsq *bsq);

#endif
