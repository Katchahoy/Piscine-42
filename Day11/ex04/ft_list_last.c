/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:20:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 18:07:09 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list_item;

	if (!begin_list)
		return (NULL);
	list_item = begin_list;
	while (list_item->next)
		list_item = list_item->next;
	return (list_item);
}
