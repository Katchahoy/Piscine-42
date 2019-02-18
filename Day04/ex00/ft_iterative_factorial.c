/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 11:43:43 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/11 17:17:08 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fact;
	int		i;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	fact = 1;
	i = 0;
	while (++i <= nb)
		fact *= i;
	return (fact);
}
