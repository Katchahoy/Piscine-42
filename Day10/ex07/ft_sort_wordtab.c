/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 20:31:42 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:23:13 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s2;
	*s2 = *s1;
	*s1 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 || !*s2 || *s1 != *s2)
		return (*s1 - *s2);
	return (ft_strcmp(s1 + 1, s2 + 1));
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = i;
		while (tab[++j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
		}
	}
}
