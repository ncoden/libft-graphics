/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:54:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics/2denv.h"
#include "libft-graphics/vec.h"

void		ft_vecset(t_vec *vec, t_2dpos *pos, int len, double ang)
{
	if (vec)
	{
		vec->pos = *pos;
		vec->len = len;
		vec->ang = ang;
	}
}
