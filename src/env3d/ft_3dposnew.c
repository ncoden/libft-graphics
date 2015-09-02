/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dposnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:05:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:50:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft-graphics/3denv.h"

t_3dpos		*ft_3dposnew(int x, int y, int z)
{
	t_3dpos	*new;

	if (!(new = (t_3dpos *)malloc(sizeof(t_3dpos))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
