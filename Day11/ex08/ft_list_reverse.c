/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 12:47:26 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 14:32:58 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*elem;
	t_list	*tmp;

	elem = *begin_list;
	while (elem->next)
	{
		tmp = elem->next;
		elem->next = tmp->next;
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}
