/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:37:37 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 21:47:00 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_copy_no_spaces(char *dst, char *src)
{
	while (*src)
	{
		if (*src != ' ')
			*dst++ = *src;
		src++;
	}
	*dst = '\0';
}

void	ft_remove_brackets(char **str)
{
	int		len;
	int		bracket;
	int		i;

	if (**str != '(')
		return ;
	len = ft_strlen_no_spaces(*str);
	bracket = 0;
	i = 0;
	while (++i < len - 2)
	{
		if ((*str)[i] == '(')
			bracket++;
		else if ((*str)[i] == ')')
			bracket--;
		if (bracket < 0)
			return ;
	}
	(*str)[len - 1] = '\0';
	(*str)++;
}

int		ft_index_lowest_op(char *str)
{
	int		bracket;
	int		i;
	int		index_op;
	char	c;
	char	op;

	index_op = 0;
	bracket = 0;
	op = 0;
	i = -1;
	while ((c = str[++i]))
	{
		if (bracket == 0 && i > 0 && !ft_op_pre(str[i - 1])
			&& (ft_op_pre(c) == 1 || (ft_op_pre(c) > 1 && ft_op_pre(op) > 1)))
		{
			index_op = i;
			op = str[i];
		}
		else if (c == '(')
			bracket++;
		else if (c == ')')
			bracket--;
	}
	return (index_op);
}

int		eval_expr_rec(char *str)
{
	int		i;
	char	op;

	ft_remove_brackets(&str);
	if (ft_is_number(str))
		return (ft_atoi(str));
	i = ft_index_lowest_op(str);
	op = str[i];
	str[i] = '\0';
	return (ft_calculate(eval_expr_rec(str), eval_expr_rec(str + i + 1), op));
}

int		eval_expr(char *input)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen_no_spaces(input) + 1));
	ft_copy_no_spaces(str, input);
	return (eval_expr_rec(str));
}
