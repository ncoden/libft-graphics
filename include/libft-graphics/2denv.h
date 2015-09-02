/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2denv.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 11:00:11 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/02 09:06:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_2DENV_H
# define LIBFT_2DENV_H

# include <stddef.h>
# include "libft/containers/list.h"
# include "libft-graphics/img.h"

typedef struct	s_2dpos
{
	int		x;
	int		y;
}				t_2dpos;

typedef struct	s_2dsize
{
	size_t	x;
	size_t	y;
}				t_2dsize;

typedef struct	s_2dline
{
	t_2dpos	from;
	t_2dpos to;
	int		color;
}				t_2dline;

typedef struct	s_2dcam
{
	t_2dpos		pos;
	double		ang;
	int			d;
	t_2dsize	view;
}				t_2dcam;

typedef struct	s_2denv
{
	void	*mlx;
	void	*win;
	t_img	img;
	t_2dcam	*cam;
	t_lst	*obj;
}				t_2denv;

t_2denv			*ft_2denvnew(void *mlx, size_t x, size_t y, char *title);
void			ft_2denvupdate(t_2denv *e);
t_2dpos			*ft_2dposnew(int x, int y);
t_2dsize		*ft_2dsizenew(size_t x, size_t y);
void			ft_2dsizeset(t_2dsize *size, size_t x, size_t y);
void			ft_2dposset(t_2dpos *pos, int x, int y);

void			ft_print2dline(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant1(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant2(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant3(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant4(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant5(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant6(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant7(t_2denv *e, t_2dline *line);
void			ft_print2dline_octant8(t_2denv *e, t_2dline *line);
void			ft_printline(t_2denv *e, t_2dpos *from, t_2dpos *to, int color);
void			ft_printsqr(t_2denv *e, t_2dpos *from, t_2dpos *to, int color);

#endif
