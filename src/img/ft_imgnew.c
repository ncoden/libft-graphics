/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 20:33:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:52:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <mlx.h>
#include "libft-graphics/img.h"

t_img				*ft_imgnew(void *mlx, size_t x, size_t y)
{
	int			bpp;
	t_img		*new;

	if (mlx)
	{
		if ((new = (t_img *)malloc(sizeof(t_img))))
		{
			if ((new->data = mlx_new_image(mlx, x, y)))
			{
				if ((new->buff = mlx_get_data_addr(new->data, &bpp,
						&new->size_x, (int *)&new->endian)))
				{
					new->bpp = bpp / 8;
					return (new);
				}
			}
		}
		ft_imgdel(new, mlx);
	}
	return (NULL);
}
