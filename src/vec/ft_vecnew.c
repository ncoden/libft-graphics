/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:54:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft-graphics/2denv.h"
#include "libft-graphics/vec.h"

t_vec		*ft_vecnew(t_2dpos *pos, int len, double ang)
{
	t_vec	*new;

	if (!(new = (t_vec *)malloc(sizeof(t_vec))))
		return (NULL);
	new->pos = *pos;
	new->len = len;
	new->ang = ang;
	return (new);
}
