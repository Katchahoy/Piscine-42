/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:03:20 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 13:40:46 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

t_bool		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

t_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

t_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
