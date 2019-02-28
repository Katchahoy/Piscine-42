/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:23:28 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:23:36 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s2;
	*s2 = *s1;
	*s1 = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = i;
		while (tab[++j])
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
		}
	}
}
