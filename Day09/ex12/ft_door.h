/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:03:06 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 13:41:04 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

enum				e_state
{
	OPEN,
	CLOSE
};

typedef enum		e_bool
{
	FALSE,
	TRUE
}					t_bool;

typedef struct		s_door
{
	enum e_state	state;
}					t_door;

#endif
