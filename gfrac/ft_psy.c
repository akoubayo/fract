/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_psy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 10:54:50 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:30:02 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_psy(t_env *e)
{
	float t;

	e->r = rand() % 100;
	e->g = rand() % 100;
	e->b = rand() % 100;
	e->cond = rand() % (50 - 4) + 4;
	t = rand() % (19 - 0) + 0;
	e->cond_n = rand() % (10 - 1) + 1 + t / 100;
	e->ite = rand() % (150 - 30) + 30;
	e->cond_n = (float)e->cond_n + t / 100 + t / 1000;
}
