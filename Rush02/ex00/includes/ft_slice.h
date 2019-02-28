/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slice.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomoulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 09:54:53 by lomoulin          #+#    #+#             */
/*   Updated: 2019/02/24 23:36:39 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SLICE_H
# define FT_SLICE_H

# define BUF_SIZE 16

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_slice {
	char	**array;
	int		cap;
	int		len;
}				t_slice;

t_slice			*ft_create_slice();
t_slice			*ft_readstdin(void);

void			ft_append(t_slice *slice, char *elem);

char			*ft_concat(t_slice *slice, int *cols, int *lines);
char			*generate_rush(char *symbols, int lines, int cols);
char			select_char(char *symbols, int vars[2], int lines, int cols);

#endif
