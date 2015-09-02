/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2denvnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:08:50 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:09:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <mlx.h>
#include "libft-graphics/2denv.h"

t_2denv		*ft_2denvnew(void *mlx, size_t x, size_t y, char *title)
{
	t_2denv	*new;

	new = NULL;
	if (mlx == NULL)
		mlx = mlx_init();
	if (mlx != NULL)
	{
		if (!(new = (t_2denv *)malloc(sizeof(t_2denv))))
			return (NULL);
		new->mlx = mlx;
		if (!(new->win = mlx_new_window(mlx, x, y, title)))
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
