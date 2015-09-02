/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 11:05:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:05:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H

# include "libft-graphics/2denv.h"

typedef struct	s_vec
{
	t_2dpos	pos;
	int		len;
	double	ang;
}				t_vec;

t_vec			*ft_vecnew(t_2dpos *pos, int len, double ang);
void			ft_vecset(t_vec *vec, t_2dpos *pos, int len, double ang);

void			ft_printvec(t_2denv *e, t_vec *vec, int color);

#endif
