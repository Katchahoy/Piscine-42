/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:59:43 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 10:23:26 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	static int	count = 0;

	if (base <= 1)
		return (count);
	count++;
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2));
	return (ft_collatz_conjecture(base * 3 + 1));
}
