/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:34:13 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/20 22:27:02 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	return (!*str ? 0 : 1 + ft_strlen(str + 1));
}

int		ft_params_length(int argc, char **argv)
{
	int		i;
	int		length;

	length = 0;
	i = 0;
	while (++i < argc)
		length += ft_strlen(argv[i]);
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	int		length;

	length = ft_params_length(argc, argv) + argc;
	if (!(str = (char*)malloc(length * sizeof(char))))
		return ((char*)0);
	if (argc == 1)
		*str = '\0';
	else
	{
		k = 0;
		i = 0;
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j])
				str[k++] = argv[i][j++];
			str[k++] = '\n';
		}
		str[--k] = '\0';
	}
	return (str);
}
