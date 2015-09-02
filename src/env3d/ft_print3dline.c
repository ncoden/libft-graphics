/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3dline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:34:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:51:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics/2denv.h"
#include "libft-graphics/3denv.h"

void		ft_print3dline(t_3denv *e, t_3dline *line)
{
	t_2dline	line2d;

	ft_3dto2dpos(e, &line->from, &line2d.from);
	ft_3dto2dpos(e, &line->to, &line2d.to);
	line2d.color = line->color;
	ft_print2dline((t_2denv *)e, &line2d);
}
