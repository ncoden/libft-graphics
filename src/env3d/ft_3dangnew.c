/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dangnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:08:38 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:55:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

t_3dang		*ft_3dangnew(double x, double y, double z)
{
	t_3dang		*new;

	if (!(new = (t_3dang *)malloc(sizeof(t_3dang))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
