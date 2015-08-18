/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dcamnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:14:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:55:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

t_3dcam		*ft_3dcamnew(t_3dpos *pos, t_3dang *ang, int d, t_2dsize *view)
{
	t_3dcam		*new;

	if (!(new = (t_3dcam *)ft_memalloc(sizeof(t_3dcam))))
		return (NULL);
	if (pos != NULL)
		new->pos = *pos;
	if (ang != NULL)
		new->ang = *ang;
	new->d = d;
	if (view != NULL)
		new->view = *view;
	return (new);
}
