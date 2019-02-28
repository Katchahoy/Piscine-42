/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 12:11:56 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/24 23:22:21 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slice.h"
#include <unistd.h>
#include "libft.h"

t_slice		*ft_readstdin(void)
{
	int			n;
	char		buf[BUF_SIZE + 1];
	t_slice		*slice;

	slice = ft_create_slice();
	while ((n = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[n] = '\0';
		ft_append(slice, buf);
	}
	return (slice);
}
