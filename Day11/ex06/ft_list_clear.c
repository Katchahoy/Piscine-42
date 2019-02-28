/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:08:15 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 18:12:12 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	if (!*begin_list)
		return ;
	if ((*begin_list)->next)
		ft_list_clear(&((*begin_list)->next));
	free(*begin_list);
	*begin_list = NULL;
}
