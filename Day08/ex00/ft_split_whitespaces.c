/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:38:20 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/18 20:13:27 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_count_words(char *str)
{
	if (!*str)
		return (0);
	if (!ft_is_separator(*str) && *(str + 1) == '\0')
		return (1);
	if (!ft_is_separator(*str) && ft_is_separator(*(str + 1)))
		return (1 + ft_count_words(str + 1));
	return (ft_count_words(str + 1));
}

int		ft_length_first_word(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] && ft_is_separator(str[i]))
		i++;
	j = 0;
	while (str[i + j] && !ft_is_separator(str[i + j]))
		j++;
	return (j);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*str_cut;
	int		nb_words;
	int		word_length;
	int		i;

	nb_words = ft_count_words(str);
	tab = (char**)malloc(sizeof(char*) * (nb_words + 1));
	i = -1;
	str_cut = str;
	while (++i < nb_words)
	{
		while (ft_is_separator(*str_cut))
			str_cut++;
		word_length = ft_length_first_word(str_cut);
		tab[i] = (char*)malloc(sizeof(char) * word_length);
		ft_strncpy(tab[i], str_cut, word_length);
		str_cut = str_cut + word_length;
		while (*str_cut && !ft_is_separator(*str_cut))
			str_cut++;
	}
	tab[i] = (char*)0;
	return (tab);
}
