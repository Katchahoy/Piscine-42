/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 10:54:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 21:01:07 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_op		t_op;

struct					s_op
{
	void	*data;
	t_op	*next;
};

int						ft_is_space(char c);
int						ft_is_op(char c);
int						ft_is_digit(char c);
int						ft_is_numeric(char *str);
int						ft_is_number(char *str);

int						ft_add(int a, int b);
int						ft_sub(int a, int b);
int						ft_mul(int a, int b);
int						ft_div(int a, int b);
int						ft_mod(int a, int b);

int						ft_atoi(char *str);
int						ft_strlen_no_spaces(char *str);
int						ft_op_pre(char c);
int						ft_doop(int a, int b, int (*f)(int, int));
int						ft_calculate(int a, int b, char op);

int						ft_index_lowest_op(char *str);
int						eval_expr(char *str);
int						eval_expr_rec(char *str);

void					ft_putchar(char c);
void					ft_putnbr(int nb);
void					ft_putstr(char *str);
void					ft_copy_no_spaces(char *dst, char *src);
void					ft_remove_brackets(char **str);

#endif
