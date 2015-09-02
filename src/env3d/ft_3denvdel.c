/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:13:10 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:47:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <mlx.h>
#include "libft-graphics/3denv.h"
#include "libft-graphics/img.h"

void			ft_3denvdel(t_3denv *e)
{
	if (e)
	{
		if (e->mlx)
		{
			if (e->win)
				mlx_destroy_window(e->mlx, e->win);
			if (e->img.buff)
				ft_imgclr(&e->img, e->mlx);
			free(e->mlx);
		}
		free(e);
	}
}
