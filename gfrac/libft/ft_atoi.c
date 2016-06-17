/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 18:13:17 by daltman           #+#    #+#             */
/*   Updated: 2016/04/11 18:13:23 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			i;
	int			negatif;

	i = 0;
	negatif = 1;
	while (*str == '\v' || *str == '\r' || *str == '\f' ||
			*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negatif = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + *str - '0';
		str++;
	}
	return (i * negatif);
}
