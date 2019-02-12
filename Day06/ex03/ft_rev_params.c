/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:04:52 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 17:08:49 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	i = argc;
	while (--i > 0)
	{
		j = 0;
		while ((c = argv[i][j++]) != '\0')
			ft_putchar(c);
		ft_putchar('\n');
	}
	return (0);
}
