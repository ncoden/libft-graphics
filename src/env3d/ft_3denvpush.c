/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 18:20:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/18 15:59:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-graphics.h"

t_lst		*ft_3denvpush(t_3denv *e, t_3dline *line)
{
	return (ft_lstpushback(&e->obj, line, sizeof(t_3dline)));
}
