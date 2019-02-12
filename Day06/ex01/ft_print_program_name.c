/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:39:29 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 16:59:40 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		i;
	char	c;
	
	i = 0;
	while ((c = argv[0][i++]) != '\0')
		ft_putchar(c);
	ft_putchar('\n');
	return (0);
}
