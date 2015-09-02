/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dsizeset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:30:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:10:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft-graphics/2denv.h"

void		ft_2dsizeset(t_2dsize *size, size_t x, size_t y)
{
	if (size)
	{
		size->x = x;
		size->y = y;
	}
}
