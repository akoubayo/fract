/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:57:26 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:31:22 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_type(t_env *e, double *za, double *zb, double tmp)
{
	if (e->mandel == 1 || e->mandel > 4)
	{
		*za = tmp * tmp - *zb * *zb + e->ca;
		*zb = 2 * tmp * *zb + e->cb;
	}
	else if (e->mandel == 2)
	{
		*za = tmp * tmp * tmp - 3 * tmp * *zb * *zb + e->ca;
		*zb = 3 * tmp * tmp * *zb - *zb * *zb * *zb + e->cb;
	}
	else if (e->mandel == 3)
	{
		*za = tmp * tmp * tmp * tmp - 6 * tmp * tmp * *zb * *zb + *zb * *zb * \
			*zb * *zb + e->ca;
		*zb = 4 * tmp * tmp * tmp * *zb - 4 * tmp * *zb * *zb * *zb + e->cb;
	}
	else if (e->mandel == 4)
	{
		*za = tmp * tmp * tmp * tmp * tmp - 10 * tmp * tmp * tmp * *zb * *zb + \
			5 * tmp * *zb * *zb * *zb * *zb + e->ca;
		*zb = 5 * tmp * tmp * tmp * tmp * *zb - 10 * tmp * tmp * *zb * *zb * \
			*zb + *zb * *zb * *zb * *zb * *zb + e->cb;
	}
}
