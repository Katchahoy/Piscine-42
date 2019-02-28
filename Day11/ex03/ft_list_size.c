/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:08:43 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 18:05:45 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list_item;
	int		i;

	if (!*begin_list)
		return (0);
	i = 0;
	list_item = begin_list;
	while (list_item)
	{
		list_item = list_item->next;
		i++;
	}
	return (i);
}
