/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 13:44:08 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/11 19:12:50 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		abs(int nb)
{
	return (nb > 0 ? nb : -nb);
}

int		ft_is_free(int row, int col, int *queens_pos)
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		if ((j = queens_pos[i]) > 0)
		{
			if (i == row
				|| j == col
				|| abs(row - i) == abs(col - j))
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_rec_puzzle(int *queens_pos, int nb_queens, int *ptr_count_sol)
{
	int		i;

	if (nb_queens == 8)
		(*ptr_count_sol)++;
	else
	{
		i = -1;
		while (++i < 8)
		{
			if (ft_is_free(nb_queens, i + 1, queens_pos))
			{
				queens_pos[nb_queens] = i + 1;
				if (ft_rec_puzzle(queens_pos, nb_queens + 1, ptr_count_sol))
					return (1);
				queens_pos[nb_queens] = 0;
			}
		}
	}
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int		queens_pos[8];
	int		count_sol;
	int		*ptr_count_sol;
	int		i;

	count_sol = 0;
	ptr_count_sol = &count_sol;
	i = -1;
	while (++i < 8)
		queens_pos[i] = 0;
	(ft_rec_puzzle(queens_pos, 0, ptr_count_sol));
	return (*ptr_count_sol);
}
