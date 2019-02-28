/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomoulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:32:18 by lomoulin          #+#    #+#             */
/*   Updated: 2019/02/24 23:35:55 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_slice.h"

int		ft_rush_match(char *str, int lines, int col)
{
	if (strcmp(generate_rush(0, lines, col), str) == 0)
		return (1);
	if (strcmp(generate_rush(1, lines, col), str) == 0)
		return (1);
	if (strcmp(generate_rush(2, lines, col), str) == 0)
		return (1);
	if (strcmp(generate_rush(3, lines, col), str) == 0)
		return (1);
	if (strcmp(generate_rush(4, lines, col), str) == 0)
		return (1);
	return (0);
}

int		main(void)
{
	t_slice		*test;
	char		*str;
	int			lines;
	int			cols;
	int			i;

	lines = 0;
	cols = 0;
	test = ft_readstdin();
	str = ft_concat(test, &lines, &cols);
	ft_putstr(str);
	cols = cols / lines - 1;
	i = 0;
	ft_rush_match(str, lines, cols);
	return (0);
}
