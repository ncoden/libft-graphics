/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2dline_left.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 15:41:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:11:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/memory.h"
#include "libft-graphics/2denv.h"
#include "libft-graphics/img.h"

static inline void		print_pixel(t_img *img, int x, int y, int color)
{
	ft_memcpy(&img->buff[(y * img->size_x) + (x * img->bpp)], &color, img->bpp);
}

inline void				ft_print2dline_octant4(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.x - line->from.x;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (--x < line->to.x)
			break ;
		if ((diff += 2 * (line->to.y - line->from.y)) >= 0)
		{
			++y;
			diff += 2 * (line->to.x - line->from.x);
		}
	}
}

inline void				ft_print2dline_octant3(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.y - line->from.y;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (++y > line->to.y)
			break ;
		if ((diff += 2 * (line->to.x - line->from.x)) <= 0)
		{
			--x;
			diff += 2 * (line->to.y - line->from.y);
		}
	}
}

inline void				ft_print2dline_octant5(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.x - line->from.x;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (--x < line->to.x)
			break ;
		if ((diff -= 2 * (line->to.y - line->from.y)) >= 0)
		{
			--y;
			diff += 2 * (line->to.x - line->from.x);
		}
	}
}

inline void				ft_print2dline_octant6(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.y - line->from.y;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (--y < line->to.y)
			break ;
		if ((diff -= 2 * (line->to.x - line->from.x)) >= 0)
		{
			--x;
			diff += 2 * (line->to.y - line->from.y);
		}
	}
}
