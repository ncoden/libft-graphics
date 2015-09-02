/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2denvupdate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 16:17:30 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:09:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libft-graphics/2denv.h"

void		ft_2denvupdate(t_2denv *e)
{
	if (e && e->mlx && e->win && e->img.data)
		mlx_put_image_to_window(e->mlx, e->win, e->img.data, 0, 0);
}
