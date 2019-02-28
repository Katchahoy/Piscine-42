/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:27:48 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 17:39:02 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	if (!*charset)
		return (0);
	return ((c == *charset) ? 1 : ft_is_separator(c, charset + 1));
}

int		ft_count_words(char *str, char *charset)
{
	if (!*str)
		return (0);
	if (!ft_is_separator(*str, charset) && !*(str + 1))
		return (1);
	if (!ft_is_separator(*str, charset) && ft_is_separator(*(str + 1), charset))
		return (1 + ft_count_words(str + 1, charset));
	return (ft_count_words(str + 1, charset));
}

int		ft_length_first_word(char *str, char *charset)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] && ft_is_separator(str[i], charset))
		i++;
	j = 0;
	while (str[i + j] && !ft_is_separator(str[i + j], charset))
		j++;
	return (j);
}

char	*ft_strncpy(char *dst, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n && *src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*str_cut;
	int		nb_words;
	int		word_length;
	int		i;

	str_cut = str;
	nb_words = ft_count_words(str, charset);
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_words + 1))))
		return ((char**)0);
	i = 0;
	while (i < nb_words)
	{
		while (ft_is_separator(*str_cut, charset))
			str_cut++;
		word_length = ft_length_first_word(str_cut, charset);
		if (!(tab[i] = (char*)malloc(sizeof(char) * (word_length + 1))))
			return ((char**)0);
		ft_strncpy(tab[i], str_cut, word_length);
		str_cut += word_length;
		i++;
	}
	tab[i] = (char*)0;
	return (tab);
}
