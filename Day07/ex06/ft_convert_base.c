/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:32:45 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/22 09:32:15 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nb_digits_base_or_power(int nb1, int nb2, int p)
{
	if (p)
	{
		if (nb2 < 2)
			return (0);
		if (nb1 < nb2)
			return (1);
		return (1 + ft_nb_digits_base_or_power(nb1 / nb2, nb2, 1));
	}
	else
	{
		if (nb2 < 0)
			return (0);
		if (nb2 == 0)
			return (1);
		return (nb1 * ft_nb_digits_base_or_power(nb1, nb2 - 1, 0));
	}
}

int		ft_length_valid_base(char *base)
{
	int		i;
	int		j;
	char	c1;
	char	c2;

	i = -1;
	while ((c1 = base[++i]))
	{
		if (c1 <= ' ' || c1 == '+' || c1 == '-')
			return (0);
		j = i;
		while ((c2 = base[++j]))
		{
			if (c1 == c2)
				return (0);
		}
	}
	return (i);
}

int		*ft_atoi_base(int *num, char *nbr, char *base)
{
	int		base_length;
	int		i;
	int		j;
	int		sign;

	if ((base_length = ft_length_valid_base(base)) < 2)
		return (NULL);
	*num = 0;
	i = 0;
	sign = (*nbr == '-') ? -1 : 1;
	i = (*nbr == '+' || *nbr == '-') ? 0 : -1;
	while (nbr[++i])
	{
		j = -1;
		while (base[++j] != nbr[i])
		{
			if (!base[j])
				return (NULL);
		}
		if (base[j] == nbr[i])
			*num = *num * base_length + j;
	}
	*num *= sign;
	return (num);
}

char	*ft_itoa_base(char *nbr, int nb, char *base)
{
	unsigned int	num;
	int				length;
	int				base_length;
	int				i;
	int				mult;

	if ((base_length = ft_length_valid_base(base)) < 2)
		return ((char*)0);
	num = (nb < 0) ? -nb : nb;
	length = ft_nb_digits_base_or_power(num, base_length, 1);
	length = (nb < 0) ? length + 1 : length;
	if (nb < 0)
		nbr[0] = '-';
	i = (nb < 0) ? 0 : -1;
	while (++i < length)
	{
		mult = ft_nb_digits_base_or_power(base_length, length - i - 1, 0);
		nbr[i] = base[num / mult];
		num %= mult;
	}
	nbr[i] = '\0';
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		base_length;
	char	*num_out;

	num = *ft_atoi_base(&num, nbr, base_from);
	if ((base_length = ft_length_valid_base(base_to)) < 2)
		return ((char)*0);
	if (!(num_out = (char*)malloc(sizeof(char) * (base_length + 2))))
		return ((char*)0);
	num_out = ft_itoa_base(num_out, num, base_to);
	return (num_out);
}
