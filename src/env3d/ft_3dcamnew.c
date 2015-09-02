/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dcamnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:14:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:22:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft-graphics/2denv.h"
#include "libft-graphics/3denv.h"

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
