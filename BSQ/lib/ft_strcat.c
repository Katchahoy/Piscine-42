/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:03:57 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/25 18:22:05 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_strcat(char *dst, char *src)
{
	char	*dst_0;

	dst_0 = dst;
	while (*dst)
		dst++;
	while (*src)
		*dst++ = *src++;
	return (dst_0);
}
