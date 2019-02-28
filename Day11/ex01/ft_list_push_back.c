/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:26:49 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 14:56:03 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_list_item;
	t_list	*list_item;

	new_list_item = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = new_list_item;
	else
	{
		list_item = *begin_list;
		while (list_item->next)
			list_item = list_item->next;
		list_item->next = new_list_item;
	}
}
