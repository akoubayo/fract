/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_fract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:02:34 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:21:36 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_deb(t_env *e)
{
	if (e->nb_frac == 1)
		mlx_string_put(e->mlx, e->win, 610, 10, 0x00FF00,\
			"FRACTALE DE MANDELBROT");
	if (e->nb_frac == 2)
		mlx_string_put(e->mlx, e->win, 610, 10, 0x00FF00, "FRACTALE DE JULIA");
	if (e->nb_frac == 3)
		mlx_string_put(e->mlx, e->win, 610, 10, 0x00FF00, "FRACTALE DE NEWTON");
}

static void	ft_end(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 610, 310, 0x00FFFF,
			"\"i\" pour reinitialiser les params");
	if (e->nb_frac != 1)
	{
		mlx_string_put(e->mlx, e->win, 610, 335, 0x00FFFF,
				"\"j\" pour modifier les parmetres.");
	}
	return ;
}

void		ft_write_fract(t_env *e)
{
	mlx_clear_window(e->mlx, e->win);
	ft_deb(e);
	mlx_string_put(e->mlx, e->win, 610, 35, 0x00FFFF, "Press \"esc\" pour \
	quitter.");
	mlx_string_put(e->mlx, e->win, 610, 60, 0x00FFFF, "\"num\" pour changer \
	la condition.");
	mlx_string_put(e->mlx, e->win, 610, 85, 0x00FFFF, "\"shift + num\" pour \
	changer la couleur.");
	mlx_string_put(e->mlx, e->win, 610, 110, 0x00FFFF, "\"ctrl + num\" pour \
	modifier la fractale.");
	mlx_string_put(e->mlx, e->win, 610, 135, 0x00FFFF, "\"p\" pour ajouter \
	du detail.");
	mlx_string_put(e->mlx, e->win, 610, 160, 0x00FFFF, "\"m\" pour enlever \
	du detail.");
	mlx_string_put(e->mlx, e->win, 610, 185, 0x00FFFF, "\"a\" pour un effet \
	psychedelique");
	mlx_string_put(e->mlx, e->win, 610, 210, 0x00FFFF, "\"molette up\" pour \
	zoomer");
	mlx_string_put(e->mlx, e->win, 610, 235, 0x00FFFF, "\"molette down\" pour \
	dezoomer");
	mlx_string_put(e->mlx, e->win, 610, 260, 0x00FFFF, "\"click + bouger\" \
			pour se deplacer");
	mlx_string_put(e->mlx, e->win, 610, 285, 0x00FFFF, "\"f\" pour changer de \
	fractale");
	ft_end(e);
}
