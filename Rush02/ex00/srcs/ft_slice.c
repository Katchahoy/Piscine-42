/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomoulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 09:54:48 by lomoulin          #+#    #+#             */
/*   Updated: 2019/02/24 23:23:55 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slice.h"
#include "libft.h"

t_slice	*ft_create_slice(void)
{
	t_slice	*slice;

	slice = malloc(sizeof(t_slice));
	slice->cap = 10;
	slice->len = 0;
	slice->array = malloc(10 * sizeof(char *));
	return (slice);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	char	*dst_0;

	dst = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	dst_0 = dst;
	while ((*dst++ = *src++) != '\0')
		;
	*dst = '\0';
	return (dst_0);
}

void	ft_append(t_slice *slice, char *elem)
{
	char	**array;
	int		i;
	int		len;

	len = ft_strlen(elem);
	if (slice->cap == slice->len)
	{
		array = malloc(2 * slice->cap * sizeof(char *));
		slice->cap *= 2;
		i = -1;
		while (++i < len)
			array[i] = slice->array[i];
		array[i] = ft_strdup(elem);
		slice->len++;
		free(slice->array);
		slice->array = array;
	}
	else
	{
		i = slice->len;
		slice->array[i] = ft_strdup(elem);
		slice->len++;
	}
}

char	*ft_concat(t_slice *slice, int *lines, int *cols)
{
	char	*str;
	int		n;
	int		i;
	int		j;

	n = 0;
	i = -1;
	while (++i < slice->len)
		n += ft_strlen(slice->array[i]);
	str = malloc((n + 1) * sizeof(char));
	*cols = n;
	i = -1;
	n = 0;
	while (++i < slice->len)
	{
		j = -1;
		while (++j < ft_strlen(slice->array[i]))
		{
			if (slice->array[i][j] == '\n')
				(*lines)++;
			str[n++] = slice->array[i][j];
		}
	}
	str[n] = '\0';
	return (str);
}
