/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:05:52 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 15:44:41 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	nb_nat;
	static int		bits;

	bits = (value < 0) ? 1 : 0;
	nb_nat = (value < 0) ? -value : value;
	if (nb_nat == 0 || nb_nat == 1)
		return (nb_nat);
	return ((nb_nat % 2) + ft_active_bits(nb_nat / 2));
}
