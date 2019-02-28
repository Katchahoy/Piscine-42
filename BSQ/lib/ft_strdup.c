/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:15:38 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 22:34:34 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/bsq.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	if (!(dst = (char*)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	i = -1;
	dst[BUF_SIZE] = '\0';
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
