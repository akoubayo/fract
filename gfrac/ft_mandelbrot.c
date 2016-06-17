/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:44:44 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:31:03 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			ft_mandelbrot(t_env *e, int x, int y)
{
	double	za;
	double	zb;
	double	tmp;
	int		a;
	int		a2;

	e->ca = 1.5 * (x - (600) / 2) / (0.5 * e->zoom * (600)) + \
			(e->x / (600) / 1.37) - 0.5;
	e->cb = (y - (600) / 2) / (0.5 * e->zoom * (600)) - (e->y / (600) / 1.92);
	za = 0.0;
	zb = 0.0;
	a = 0;
	while (za * za + zb * zb <= e->cond && a < e->ite)
	{
		tmp = za;
		ft_type(e, &za, &zb, tmp);
		a++;
	}
	return (a);
}
