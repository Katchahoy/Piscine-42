/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:07:46 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 16:24:47 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	c1;
	char	c2;

	i = 0;
	while ((c1 = s1[i]) == (c2 = s2[i])
		&& c1 != '\0'
		&& c2 != '\0')
		i++;
	return (c1 - c2);
}