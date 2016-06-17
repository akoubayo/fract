/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:42:09 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:29:13 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_struct(t_env *e)
{
	e->x = 0.0;
	e->y = 0.0;
	e->ca = 0.0;
	e->cb = 0.0;
	e->mlx = NULL;
	e->win = NULL;
	e->r = 18;
	e->g = 6;
	e->b = 4;
	e->zoom = 1.0;
	e->ite = 25;
	e->cond = 4;
	e->ctrl = 0;
	e->mandel = 1;
	e->shift = 0;
	e->mouse_g = 0;
	e->clock_prg = clock();
	e->psy = 0;
	e->julia = 1;
	e->cond_n = 0.2;
}
