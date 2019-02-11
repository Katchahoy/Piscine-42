/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:09:08 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/07 17:58:45 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_one_combn(char nb[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(nb[i]);
		i++;
	}
	if (nb[0] <= '9' - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	char	nb[n];
	int		i;

	if (n < 0 || n > 10)
		return ;
	i = -1;
	//init array
	while (++i < n)
		nb[i] = '0' + i;
	i = n - 1;
	while (i >= 0)
	{
		while (nb[i] < '9' - n + i + 1)
		{
			ft_print_one_combn(nb, n);
			nb[i]++;
		}
		i--;
	}
}

int		main(void)
{
	//ft_print_combn(20);
	//ft_putchar('\n');
	//ft_print_combn(1);
	//ft_putchar('\n');
	//ft_print_combn(2);
	//ft_putchar('\n');
	//ft_print_combn(3);
	//ft_putchar('\n');
	ft_print_combn(4);
	ft_putchar('\n');
	//ft_print_combn(10);
	//ft_putchar('\n');
}
