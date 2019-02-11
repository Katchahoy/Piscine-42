/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 09:16:07 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/08 10:46:34 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int j;
	int tmp;

	if (size < 2)
		return ;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (tab[j] < tab[i])
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
			i--;
			j--;
		}
		i++;
	}
}
