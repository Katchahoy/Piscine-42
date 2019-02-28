/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 20:14:40 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/18 20:26:58 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_factorial(int nb);
int		ft_power(int nb, int power);
int		ft_sqrt(int nb);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_is_prime(int nb);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_printable(char *str);

char	*ft_strrev(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int n);

#endif
