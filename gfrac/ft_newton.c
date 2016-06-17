/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:47:18 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:29:39 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_newton_1(t_env *e, double za, double zb)
{
	double	tmp;
	int		a2;
	int		a;

	a = 0;
	a2 = 0;
	while (a < 20)
	{
		tmp = za;
		za = 2 * tmp / 3 - (tmp * tmp - zb * zb) / (tmp * tmp + zb * zb) /\
			(tmp * tmp + zb * zb) / 3 + e->ca;
		zb = 2 * zb / 3 + 2 * tmp * zb / (tmp * tmp + zb * zb) /\
			(tmp * tmp + zb * zb) / 3 + e->cb;
		if (za * za + zb * zb < (float)e->cond_n / 10)
			a2++;
		a++;
	}
	if (a2 == 0)
		a2 = e->ite;
	return (a2);
}

static int	ft_newton_2(t_env *e, double za, double zb)
{
	double	tmp;
	int		a2;
	int		a;

	a = 0;
	a2 = e->ite;
	while (a < 20)
	{
		tmp = za;
		za = 2 * tmp / 3 - (tmp * tmp - zb * zb) / (tmp * tmp + zb * zb)\
			/ (tmp * tmp + zb * zb) / 3 + e->ca;
		zb = 2 * zb / 3 + 2 * tmp * zb / (tmp * tmp + zb * zb)\
		/ (tmp * tmp + zb * zb) / 3 + e->ca;
		if (za * za + zb * zb < (float)e->cond_n / 10)
			a2 = a;
		a++;
	}
	return (a2);
}

static int	ft_newton_3(t_env *e, double za, double zb)
{
	double	tmp;
	int		a;

	a = 0;
	while (za * za + zb * zb < (float)e->cond_n * 10 && a < 20)
	{
		tmp = za;
		za = 2 * tmp / 3 - (tmp * tmp - zb * zb) / (tmp * tmp + zb * zb)\
			/ (tmp * tmp + zb * zb) / 3;
		zb = 2 * zb / 3 + 2 * tmp * zb / (tmp * tmp + zb * zb)\
			/ (tmp * tmp + zb * zb) / 3;
		a++;
	}
	if (a == 20)
		a = e->ite;
	return (a);
}

int			ft_newton(t_env *e, int x, int y)
{
	double	za;
	double	zb;
	double	tmp;

	za = ((4 * (float)x / 600 - 2) / e->zoom) + ((e->x / 600));
	zb = ((-4 * (float)y / 600 + 2) / e->zoom) + ((e->y / 600));
	if (e->mandel == 1)
		return (ft_newton_1(e, za, zb));
	else if (e->mandel == 2)
		return (ft_newton_2(e, za, zb));
	else
		return (ft_newton_3(e, za, zb));
}
