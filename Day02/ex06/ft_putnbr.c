/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:05:13 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/07 15:59:27 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_nat(int nb)
{
	char	c;
	int		num;
	int		mult;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	num = nb;
	mult = 1000000000;
	while (mult > 0)
	{
		c = num / mult;
		if (c != 0 || nb / mult > 0)
			ft_putchar(c + 48);
		num -= mult * c;
		mult /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		ft_putnbr_nat(nb);
	}
}
