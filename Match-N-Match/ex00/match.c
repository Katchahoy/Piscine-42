/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 21:36:36 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/17 23:40:10 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((s1[i] != s2[j]) && (s2[j] != '*'))
		return (0);
	if (s1[i] || s2[j])
	{
		while ((s1[i] == s2[j]) && s1[i] && s2[j])
		{
			i++;
			j++;
		}
		while (s2[j] == '*')
			j++;
		while ((s1[i] != s2[j]) && s1[i])
			i++;
		if (s1[i] == s2[j])
			return (1);
		else
			return (0);
	}
	return (1);
}
