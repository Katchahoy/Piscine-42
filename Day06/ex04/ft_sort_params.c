/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:09:44 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 17:28:54 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char c;

	i = 0;
	while ((c = str[i++]) != '\0')
		ft_putchar(c);
}

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

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = tmp;
			}
		}
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	
	ft_sort_params(argc, argv);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
