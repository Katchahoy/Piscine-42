/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 20:29:48 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/19 15:19:16 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# ifndef EVEN
#  define EVEN(n) n % 2 == 0
# endif

# ifndef EVEN_MSG
#  define EVEN_MSG "I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
#  define ODD_MSG "I have an odd number of arguments.\n"
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# include <unistd.h>

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

#endif
