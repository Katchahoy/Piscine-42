/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:30:59 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 16:10:44 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem1;
	t_list	*elem2;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		elem1 = *begin_list;
		*begin_list = (*begin_list)->next;
		free(elem1);
		elem1 = NULL;
	}
	elem1 = *begin_list;
	while (elem1)
	{
		elem2 = elem1->next;
		if (elem2 && cmp(elem2->data, data_ref) == 0)
		{
			elem1->next = elem2->next;
			free(elem2);
			elem2 = NULL;
		}
		else
			elem1 = elem1->next;
	}
}
