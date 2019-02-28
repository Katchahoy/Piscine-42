/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:47:27 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 11:50:40 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		tmp1;
	int		tmp2;
	int		tmp3;

	tmp1 = *******c;
	tmp2 = ****d;
	tmp3 = *b;
	*******c = ***a;
	****d = tmp1;
	*b = tmp2;
	***a = tmp3;
}
