/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dto2dpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 21:03:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:51:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libft-graphics/2denv.h"
#include "libft-graphics/3denv.h"

void		ft_3dto2dpos(t_3denv *e, t_3dpos *pos3d, t_2dpos *pos2d)
{
	double	x;
	double	y;
	double	z;
	double	c;
	double	s;

	x = pos3d->x - e->cam->pos.x;
	y = pos3d->y - e->cam->pos.y;
	z = pos3d->z - e->cam->pos.z;
	c = cos(e->cam->ang.x);
	s = sin(e->cam->ang.x);
	pos2d->y = y * c - z * s;
	z = y * s + z * c;
	c = cos(e->cam->ang.y);
	s = sin(e->cam->ang.y);
	pos2d->x = x * c + z * s;
	z = -x * s + z * c;
	c = cos(e->cam->ang.z);
	s = sin(e->cam->ang.z);
	x = pos2d->x * c - pos2d->y * s;
	y = pos2d->x * s + pos2d->y * c;
	pos2d->x = x + e->cam->view.x / 2;
	pos2d->y = y + e->cam->view.y / 2;
}
