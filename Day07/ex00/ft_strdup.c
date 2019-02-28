/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:28:22 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 17:37:41 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	return (!*str ? 0 : 1 + ft_strlen(str + 1));
}

char	*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	size;

	size = ft_strlen(src);
	if (!(dest = (char*)malloc(size * sizeof(char))))
		return ((char*)0);
	dest = ft_strcpy(dest, src);
	return (dest);
}
