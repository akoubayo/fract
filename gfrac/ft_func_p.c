/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 18:50:43 by daltman           #+#    #+#             */
/*   Updated: 2016/05/15 18:50:44 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	func_p(int key, t_env *e)
{
	if (key == 256)
		e->ctrl = 1;
	if (key == 257)
		e->shift = 1;
	return (0);
}