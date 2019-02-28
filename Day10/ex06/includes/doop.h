/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:58:03 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 09:14:54 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(long nb);

int		ft_is_operator(char *str);
int		ft_strlen(char *str);

long	ft_atoi(char *str);
long	ft_add(long nb1, long nb2);
long	ft_sub(long nb1, long nb2);
long	ft_mul(long nb1, long nb2);
long	ft_div(long nb1, long nb2);
long	ft_mod(long nb1, long nb2);

#endif
