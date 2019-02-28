/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:41:43 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 12:00:14 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*elem;

	if (nbr < 1)
		return (NULL);
	i = 0;
	elem = begin_list;
	while (++i < nbr)
	{
		if (elem->next)
			elem = elem->next;
		else
			return (NULL);
	}
	return (elem);
}
