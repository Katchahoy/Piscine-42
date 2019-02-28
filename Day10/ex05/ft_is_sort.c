/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:42:32 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/22 13:22:31 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		sort_dir;

	if (length <= 2)
		return (1);
	i = 0;
	while (i < length - 1
		&& f(tab[i], tab[i + 1]) == 0)
		i++;
	if (i == length - 1)
		return (1);
	sort_dir = (f(tab[i], tab[i + 1]) > 0) ? 1 : -1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) / sort_dir < 0)
			return (0);
		i++;
	}
	return (1);
}
