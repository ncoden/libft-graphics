/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 16:00:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

void		ft_vecset(t_vec *vec, t_2dpos *pos, int len, double ang)
{
	if (vec)
	{
		vec->pos = *pos;
		vec->len = len;
		vec->ang = ang;
	}
}
