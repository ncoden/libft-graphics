/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:06:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:14:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <math.h>
#include "libft-graphics/2denv.h"
#include "libft-graphics/vec.h"

void		ft_printvec(t_2denv *e, t_vec *vec, int color)
{
	int		len;
	double	xang;
	double	yang;

	if (e && vec)
	{
		xang = cos(vec->ang);
		yang = sin(vec->ang);
		len = vec->len;
		while (len >= 0)
		{
			mlx_pixel_put(e->mlx, e->win, (vec->pos).x + len * xang,
				(vec->pos).y + len * yang, color);
			len--;
		}
	}
}
