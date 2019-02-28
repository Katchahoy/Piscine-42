/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:06:46 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 15:08:56 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*), \
			void *data_ref, int (*cmp)(void*, void*))
{
	t_list	*elem;

	elem = begin_list;
	while (elem)
	{
		if (cmp(elem->data, data_ref) == 0)
			f(elem->data);
		elem = elem->next;
	}
}
