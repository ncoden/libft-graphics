/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dposset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:06:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:50:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics/3denv.h"

void		ft_3dposset(t_3dpos *pos, int x, int y, int z)
{
	if (pos)
	{
		pos->x = x;
		pos->y = y;
		pos->z = z;
	}
}
