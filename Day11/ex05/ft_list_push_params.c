/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:40:47 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/21 16:05:47 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_list_elem;

	new_list_elem = ft_create_elem(data);
	new_list_elem->next = *begin_list;
	*begin_list = new_list_elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*begin_list;
	int			i;

	if (ac < 2)
		return (0);
	begin_list = ft_create_elem(av[1]);
	i = 1;
	while (++i < ac)
		ft_list_push_front(&begin_list, av[i]);
	return (begin_list);
}
