/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 10:27:24 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 23:31:58 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_read_file(int ac, char **av, t_bsq *bsq)
{
	int		i;
	int		fd;

	i = 0;
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) > 0)
		{
			if (!ft_parse_bsq(bsq, fd))
				ft_display_error();
			close(fd);
			if (i < ac - 1)
				ft_putchar('\n');
		}
	}
	return (1);
}

int		main(int ac, char **av)
{
	t_bsq	bsq;

	if (ac > 1)
	{
		if (!ft_read_file(ac, av, &bsq))
			return (0);
	}
	if (ac == 1)
	{
		if (!ft_parse_bsq(&bsq, 0))
		{
			ft_display_error();
			return (0);
		}
	}
	exit(EXIT_SUCCESS);
	return (0);
}
