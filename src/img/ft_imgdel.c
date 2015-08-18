/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:08:11 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 16:00:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

void			ft_imgdel(t_img *img, void *mlx)
{
	if (img)
	{
		if (mlx && img->data)
			mlx_destroy_image(mlx, img->data);
		free(img);
	}
}
