/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:40:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 15:44:29 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_swap(void **p1, void **p2);

int		ft_strncpy_custom(char *dst, char *src, int n);
int		ft_is_numeric(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncpy_custom(char *dst, char *src, int n);

char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, int n);
char	*ft_strcat(char *dst, char *src);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strdup(char *str);

#endif
