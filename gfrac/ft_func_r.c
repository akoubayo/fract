/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 18:50:56 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 10:40:16 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_init(t_env *e)
{
	e->x = 0.0;
	e->y = 0.0;
	e->zoom = 1.0;
	e->ite = 25;
	e->ca = 0.0;
	e->cb = 0.0;
	e->r = 18;
	e->g = 6;
	e->b = 4;
}

static void	ft_change_cond(t_env *e, int key)
{
	if (key == 18)
		e->cond = 4;
	else
	{
		if ((e->cond + (key - 17) + e->cond) > 0)
			e->cond = (e->cond + (key - 17) + e->cond);
	}
}

static void	ft_change_rbg(t_env *e, int key)
{
	e->r = 18 * (key - 17);
	e->g = 6 * (key - 17);
	e->b = 4 * (key - 17);
}

int			func_r(int key, t_env *e)
{
	(key == 53) ? exit(0) : 0;
	if (key == 12)
		e->psy = (e->psy == 0) ? 1 : 0;
	(key == 34) ? ft_init(e) : 0;
	(e->ctrl == 1 && key >= 18 && key <= 21) ? e->mandel = key - 17 : 0;
	(e->shift == 1 && key >= 18 && key <= 26) ? ft_change_rbg(e, key) : 0;
	(key == 35) ? (e->ite += 2) : 0;
	(key == 41) ? e->ite -= 2 : 0;
	if (key == 38)
		e->julia = (e->julia == 0) ? 1 : 0;
	if (key >= 18 && key <= 28 && e->ctrl == 0 && e->shift == 0)
		ft_change_cond(e, key);
	if (key == 3)
	{
		e->nb_frac = (e->nb_frac == 3) ? 1 : e->nb_frac + 1;
		func_r(34, e);
		e->julia = (e->nb_frac == 2) ? 0 : 1;
	}
	if (key == 256)
		e->ctrl = 0;
	else if (key == 257)
		e->shift = 0;
	else
		ft_fractol(e);
	return (0);
}
