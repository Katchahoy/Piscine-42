/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:35:20 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/27 15:38:01 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include "../includes/ft.h"

int		ft_init_bsq(t_bsq *bsq, int fd)
{
	int		ret;
	char	c;
	char	buf[17];
	int		i;

	i = 0;
	buf[16] = '\0';
	while ((ret = read(fd, &c, 1)) > 0 && c != '\n' && i < 16)
		buf[i++] = c;
	if (i > 13 || i < 4)
		return (0);
	buf[i] = '\0';
	return (ft_parse_first_line(bsq, buf, i));
}
