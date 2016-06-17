/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 15:59:16 by daltman           #+#    #+#             */
/*   Updated: 2016/03/15 13:15:48 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 8

typedef struct	s_struct_gnl
{
	int		end[1500];
	int		fd;
	char	*file[1500];
	int		nb_carac[1500];
	int		rest[1500];
}				t_struct_gnl;

int				get_next_line(int const fd, char **line);

#endif
