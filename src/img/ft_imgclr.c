/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:39:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 16:00:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

void			ft_imgclr(t_img *img, void *mlx)
{
	if (img)
	{
		if (mlx && img->data)
			mlx_destroy_image(mlx, img->data);
		img->data = NULL;
		img->buff = NULL;
		img->bpp = 0;
		img->endian = -1;
		img->size_x = 0;
	}
}
