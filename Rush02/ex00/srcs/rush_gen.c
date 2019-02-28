/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_gen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomoulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 08:51:47 by lomoulin          #+#    #+#             */
/*   Updated: 2019/02/24 23:23:51 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slice.h"
#include "libft.h"

char	select_char(char *symbols, int vars[2], int lines, int cols)
{
	int i;
	int j;

	i = vars[0];
	j = vars[1];
	if (i == 0 && j == 0)
		return (symbols[0]);
	else if (i == 0 && j == (cols - 1))
		return (symbols[1]);
	else if (i == (lines - 1) && j == 0)
		return (symbols[2]);
	else if (i == (lines - 1) && j == (cols - 1))
		return (symbols[3]);
	else if (i == 0 || i == (lines - 1))
		return (symbols[4]);
	else if (j == 0 || j == (cols - 1))
		return (symbols[5]);
	else
		return (' ');
}

char	*generate_rush(char *symbols, int lines, int cols)
{
	int		vars[2];
	char	*str;
	char	*result;

	str = malloc((lines * cols + 1) * sizeof(char));
	result = str;
	vars[0] = -1;
	while (++(vars[0]) < lines)
	{
		vars[1] = -1;
		while (++(vars[1]) < cols)
		{
			*str++ = select_char(symbols, vars, lines, cols);
		}
		*str++ = '\n';
	}
	*str = '\0';
	return (result);
}
