/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 18:39:57 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 11:20:35 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_error(int i)
{
	ft_printf("\n%{under}Vous devez entrer un des parametres suivant :\n");
	ft_printf("%{pink}s", "	- Pour Mandelbrot tapez : M ou m\n");
	ft_printf("%{pink}s", "	- Pour Julia tapez : J ou j\n");
	ft_printf("%{pink}s", "	- Pour Newton tapez : N ou n\n\n");
	i = 0;
	return (0);
}

static int	ft_check_fract(t_env *e, char *opt)
{
	e->nb_frac = 0;
	if (opt[1] != '\0')
		return (0);
	if (opt[0] == 'm' || opt[0] == 'M')
		e->nb_frac = 1;
	else if (opt[0] == 'j' || opt[0] == 'J')
		e->nb_frac = 2;
	else if (opt[0] == 'n' || opt[0] == 'N')
		e->nb_frac = 3;
	else
		return (0);
	return (1);
}

int			main(int argc, char **argv)
{
	t_env	e;

	ft_init_struct(&e);
	if (argc < 2)
		return (ft_error(0));
	else
	{
		if (ft_check_fract(&e, argv[1]) == 0)
			return (ft_error(0));
	}
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 1000, 600, "Fractol");
	ft_fractol(&e);
	mlx_hook(e.win, 3, 0, func_r, &e);
	mlx_hook(e.win, 2, 0, func_p, &e);
	mlx_hook(e.win, 4, 0, func_m, &e);
	mlx_hook(e.win, 6, 0, func_mm, &e);
	mlx_hook(e.win, 5, 0, func_mr, &e);
	mlx_loop(e.mlx);
	return (0);
}
