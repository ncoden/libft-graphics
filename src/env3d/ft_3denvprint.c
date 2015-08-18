/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 19:31:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:57:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

void		ft_3denvprint(t_3denv *e)
{
	t_lst		*view;

	if (e)
	{
		ft_bzero(e->img.buff, sizeof(int) * e->cam->view.x * e->cam->view.y);
		view = e->obj;
		while (view != NULL)
		{
			ft_print3dline(e, (t_3dline *)view->data);
			view = view->next;
		}
		ft_3denvupdate(e);
	}
}
