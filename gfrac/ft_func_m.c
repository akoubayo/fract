/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcM.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 18:43:39 by daltman           #+#    #+#             */
/*   Updated: 2016/05/15 18:44:50 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	func_m(int bouton, int x, int y, t_env *e)
{
	x -= (600) / 2;
	y -= (600) / 2;
	if (bouton == 4)
	{
		e->zoom *= 1.1;
		e->x += x / e->zoom / 2.51;
		e->y -= y / e->zoom / 2.51;
		e->ite = (e->ite < 200) ? e->ite + 2 : e->ite;
	}
	else if (bouton == 5 && e->zoom > 0.1)
	{
		e->zoom /= 1.1;
		if (e->ite > 25 && e->ite <= 100)
			e->ite = e->ite - 2;
		else if (e->ite > 100)
			e->ite = 98;
	}
	if (bouton == 4 || bouton == 5)
		ft_fractol(e);
	if (bouton == 1)
		e->mouse_g = 1;
	return (0);
}
