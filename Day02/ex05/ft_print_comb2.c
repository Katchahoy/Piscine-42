/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 15:50:48 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/07 15:56:04 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_one_comb2(char c1, char c2, char c3, char c4)
{
	int	n1;
	int	n2;

	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
	n1 = 10 * (c1 - 48) + (c2 - 48);
	n2 = 10 * (c3 - 48) + (c4 - 48);
	if (n1 != 98 || n2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char c1;
	char c2;
	char c3;
	char c4;

	c1 = '0' - 1;
	while (++c1 <= '9')
	{
		c2 = '0' - 1;
		while (++c2 <= '9')
		{
			c3 = c1 - 1;
			c4 = c2;
			while (++c3 <= '9')
			{
				while (++c4 <= '9')
					ft_print_one_comb2(c1, c2, c3, c4);
				c4 = '0' - 1;
			}
		}
	}
}
