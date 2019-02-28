/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:52:11 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/15 13:33:28 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

enum					e_profession
{
	SAVE_THE_WORLD
};

typedef	struct			s_perso
{
	char				*name;
	float				life;
	int					age;
	enum e_profession	profession;
}						t_perso;

#endif
