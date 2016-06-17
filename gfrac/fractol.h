/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:25:15 by daltman           #+#    #+#             */
/*   Updated: 2016/05/16 15:51:52 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include "INC/ft_printf.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <time.h>
# include <limits.h>

typedef struct	s_env
{
	double			x;
	double			y;
	double			ca;
	double			cb;
	double			zoom;
	int				ite;
	void			*mlx;
	void			*win;
	void			*img;
	char			*data;
	int				bpp;
	int				sizeline;
	int				endian;
	int				r;
	int				g;
	int				b;
	int				cond;
	int				ctrl;
	int				shift;
	int				mandel;
	int				julia;
	int				mouse_g;
	clock_t			clock_prg;
	int				psy;
	int				mat[605][605];
	int				x1;
	int				x2;
	int				y1;
	int				y2;
	int				nb_frac;
	float			cond_n;
}				t_env;

void			ft_init_struct(t_env *e);
void			ft_put_pixel(t_env *e, int x, int y, int a);
void			ft_fractol(t_env *e);
int				ft_mandelbrot(t_env *e, int x, int y);
int				ft_julia(t_env *e, int x, int y);
int				ft_newton(t_env *e, int x, int y);
void			ft_type(t_env *e, double *za, double *zb,\
		double tmp);
void			ft_psy(t_env *e);
int				func_m(int bouton, int x, int y, t_env *e);
int				func_r(int key, t_env *e);
int				func_mm(int x, int y, t_env *e);
int				func_mr(int bouton, int x, int y, t_env *e);
int				func_p(int key, t_env *e);
void			ft_write_fract(t_env *e);

#endif
