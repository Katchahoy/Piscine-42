/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 09:25:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/07 14:20:09 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_one_comb(char c1, char c2, char c3)
{
	int n;

	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
	n = 100 * (c1 - 48) + 10 * (c2 - 48) + (c3 - 48);
	if (n < 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0' - 1;
	while (++c1 < '8')
	{
		c2 = c1;
		while (++c2 < '9')
		{
			c3 = c2;
			while (++c3 < '9' + 1)
			{
				ft_print_one_comb(c1, c2, c3);
			}
		}
	}
}
