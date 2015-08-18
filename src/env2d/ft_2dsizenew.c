/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dsizenew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:26:50 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:55:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

t_2dsize		*ft_2dsizenew(size_t x, size_t y)
{
	t_2dsize	*new;

	if (!(new = (t_2dsize *)malloc(sizeof(t_2dsize))))
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
