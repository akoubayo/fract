/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:22:19 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:24:00 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_type_fract(t_env *e, int x, int y)
{
	int	a;

	if (e->nb_frac == 1)
		a = ft_mandelbrot(e, x, y);
	if (e->nb_frac == 2)
		a = ft_julia(e, x, y);
	if (e->nb_frac == 3)
		a = ft_newton(e, x, y);
	return (a);
}

void		ft_fractol(t_env *e)
{
	int		x;
	int		y;
	int		a;

	x = 0;
	y = 0;
	a = 0;
	if (e->psy == 1)
		ft_psy(e);
	e->img = mlx_new_image(e->mlx, (600), (600));
	e->data = mlx_get_data_addr(e->img, &e->bpp, &e->sizeline, &e->endian);
	while (x < 600)
	{
		while (y < 600)
		{
			a = ft_type_fract(e, x, y);
			ft_put_pixel(e, x, y, a);
			y++;
		}
		y = 0;
		x++;
	}
	ft_write_fract(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	mlx_destroy_image(e->mlx, e->img);
}
