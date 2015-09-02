/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 18:20:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:49:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/containers/list.h"
#include "libft-graphics/3denv.h"

t_lst		*ft_3denvpush(t_3denv *e, t_3dline *line)
{
	return (ft_lstpushback(&e->obj, line, sizeof(t_3dline)));
}
