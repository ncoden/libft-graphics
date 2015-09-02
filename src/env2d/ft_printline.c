/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:48:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:13:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libft/basics/numbers.h"
#include "libft-graphics/2denv.h"

void		ft_printline(t_2denv *e, t_2dpos *from, t_2dpos *to, int color)
{
	int		len;
	double	xang;
	double	yang;

	len = MAX(ABS(to->x - from->x), ABS(to->y - from->y));
	xang = LIM((double)(from->x - to->x) / (double)ABS(from->y - to->y), -1, 1);
	yang = LIM((double)(from->y - to->y) / (double)ABS(from->x - to->x), -1, 1);
	while (len >= 0)
	{
		mlx_pixel_put(e->mlx, e->win, to->x + len * xang,
			to->y + len * yang, color);
		len--;
	}
}
