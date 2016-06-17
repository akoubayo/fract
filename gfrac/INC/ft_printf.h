/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:20:20 by daltman           #+#    #+#             */
/*   Updated: 2016/04/13 20:35:51 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct		s_struct
{
	char	*str;
	int		nb_carac;
	int		moins;
	int		plus;
	int		diese;
	int		zero_f;
	int		nb_prec;
	int		etoile;
	int		point;
	int		nb_point;
	char	conv;
	int		espace;
	int		hh;
	int		h;
	int		l;
	int		ll;
	int		j;
	int		z;
	int		t;
	int		gl;
	int		acc;
	char	*col;
	char	*col2;
	int		spec;
	int		acc_all;
}					t_struct;

typedef	struct		s_list_conv
{
	char	c;
	void	(*function)(va_list i, t_struct *file);
}					t_list_conv;

typedef struct		s_list_flag
{
	char	c;
}					t_list_flag;

typedef struct		s_list_modifier
{
	char	c;
}					t_list_modifier;

typedef struct		s_list_spec
{
	char	c;
}					t_list_spec;

typedef struct		s_list_col
{
	int		cou;
	char	*str;
	char	*str2;
	char	*c;
}					t_list_col;

int					ft_printf(const char *str, ...);
int					ft_read(t_struct *file, va_list ap);
void				ft_conv(t_struct *file, va_list ap);
void				ft_check_flag(t_struct *file, va_list ap);
void				ft_conv_s(va_list ap, t_struct *file);
void				ft_conv_d(va_list ap, t_struct *file);
void				ft_conv_c(va_list ap, t_struct *file);
void				ft_espace(t_struct *file, char *str, int type);
void				ft_point(t_struct *file, char *str);
void				ft_putespace(t_struct *file, int i, int zero);
void				ft_conv_u(va_list ap, t_struct *file);
void				ft_conv_ul(va_list ap, t_struct *file);
void				ft_conv_dl(va_list ap, t_struct *file);
void				ft_conv_x(va_list ap, t_struct *file);
void				ft_conv_spec_d(va_list ap, t_struct *file);
void				ft_check_spec(t_struct *file, va_list ap);
void				ft_conv_spec_u(va_list ap, t_struct *file);
void				ft_conv_o(va_list ap, t_struct *file);
void				ft_conv_lo(va_list ap, t_struct *file);
void				ft_conv_lx(va_list ap, t_struct *file);
void				ft_conv_spec_x(va_list ap, t_struct *file);
void				ft_conv_spec_o(va_list ap, t_struct *file);
void				ft_conv_spec_c(va_list ap, t_struct *file);
void				ft_conv_spec_s(va_list ap, t_struct *file);
void				ft_conv_p(va_list ap, t_struct *file);
void				ft_conv_ls(va_list ap, t_struct *file);
int					ft_convert_wchar();
int					ft_wstrlen(wchar_t *str);
int					ft_lenwchar(wchar_t str);
void				ft_conv_lc(va_list ap, t_struct *file);
void				ft_conv_dhh(va_list ap, t_struct *file);
void				ft_conv_ohh(va_list ap, t_struct *file);
void				ft_conv_uhh(va_list ap, t_struct *file);
void				ft_conv_xhh(va_list ap, t_struct *file);
void				ft_conv_xh(va_list ap, t_struct *file);
void				ft_conv_dh(va_list ap, t_struct *file);
void				ft_conv_oh(va_list ap, t_struct *file);
void				ft_conv_uh(va_list ap, t_struct *file);
int					ft_print_d(t_struct *file, char *str, int len);
int					ft_print_o(t_struct *file, char *str, int len);
int					ft_print_u(t_struct *file, char *str, int len);
int					ft_print_x(t_struct *file, char *str, int len);
void				ft_p_w(char *str, t_struct *file, int len);
void				ft_p_wd(char *str, int len, t_struct *file);
void				ft_p_wc(char str, int len, t_struct *file, int type);
char				*ft_color(t_struct *file, char *col);

#endif
