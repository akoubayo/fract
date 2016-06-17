/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:56:30 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 10:57:11 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_env *e, int x, int y, int a)
{
	int	r;
	int	g;
	int b;
	int	col;

	col = ((255 - a * e->r) << 16) + ((255 - a * e->g) << 8) + (255 - a * e->b);
	r = (col & 0xFF0000) >> 16;
	g = (col & 0xFF00) >> 8;
	b = (col & 0xFF);
	if (y >= 0 && x >= 0 && y < 600 && x < 600 && a != e->ite)
	{
		e->data[(y * e->sizeline) + ((e->bpp / 8) * x) + 2] = r;
		e->data[(y * e->sizeline) + ((e->bpp / 8) * x) + 1] = g;
		e->data[(y * e->sizeline) + ((e->bpp / 8) * x)] = b;
	}
}
