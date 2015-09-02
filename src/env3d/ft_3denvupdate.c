/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvupdate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 16:13:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:50:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libft-graphics/3denv.h"

void		ft_3denvupdate(t_3denv *e)
{
	if (e && e->mlx && e->win && e->img.data)
		mlx_put_image_to_window(e->mlx, e->win, e->img.data, 0, 0);
}
