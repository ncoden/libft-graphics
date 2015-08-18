/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 19:03:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:55:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

void		ft_printsqr(t_2denv *e, t_2dpos *from, t_2dpos *to, int color)
{
	int		x;
	int		y;

	y = from->y;
	while (y != to->y)
	{
		x = from->x;
		while (x != to->x)
		{
			mlx_pixel_put(e->mlx, e->win, x, y, color);
			(x < to->x) ? x++ : x--;
		}
		(y < to->y) ? y++ : y--;
	}
}
