/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:45:56 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 17:29:01 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ft_count_words(char *str)
{
	if (!*str)
		return (0);
	if (!ft_is_separator(*str) && !*(str + 1))
		return (1);
	if (!ft_is_separator(*str) && (ft_is_separator(*(str + 1))))
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

char	*ft_strncpy(char *dst, char *src, int n)
{
	char	*dst_0;
	int		i;

	dst_0 = dst;
	i = 0;
	while (*src && i < n)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (dst_0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*str_cut;
	int		nb_words;
	int		word_length;
	int		i;

	str_cut = str;
	nb_words = ft_count_words(str);
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_words + 1))))
		return ((char**)0);
	i = 0;
	while (i < nb_words)
	{
		while (ft_is_separator(*str_cut))
			str_cut++;
		word_length = ft_length_first_word(str_cut);
		if (!(tab[i] = (char*)malloc(sizeof(char) * (word_length + 1))))
			return ((char**)0);
		ft_strncpy(tab[i], str_cut, word_length);
		str_cut += word_length;
		i++;
	}
	tab[i] = (char*)0;
	return (tab);
}
