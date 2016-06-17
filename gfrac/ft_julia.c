/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:42:19 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:31:55 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_julia(t_env *e, int x, int y)
{
	double	za;
	double	zb;
	double	tmp;
	int		i;

	za = ((4 * (float)x / 600 - 2) / e->zoom) + ((e->x / 600));
	zb = ((-4 * (float)y / 600 + 2) / e->zoom) + ((e->y / 600));
	i = 0;
	while (za * za + zb * zb <= 4 && i < e->ite)
	{
		tmp = za;
		ft_type(e, &za, &zb, tmp);
		i++;
	}
	return (i);
}
