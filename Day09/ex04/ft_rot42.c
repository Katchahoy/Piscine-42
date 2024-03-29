/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:09:16 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/14 21:44:30 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char			*str_0;

	str_0 = str;
	while (*str)
	{
		*str = (*str > '~' - 42) ? (*str + '!' - '~' + 41) : (*str + 42);
		str++;
	}
	return (str_0);
}
