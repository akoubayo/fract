/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:04:15 by jchen             #+#    #+#             */
/*   Updated: 2015/12/21 12:20:08 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		destlen;

	d = dst;
	s = src;
	i = size;
	while (i-- != 0 && *d != '\0')
		d++;
	destlen = d - dst;
	i = size - destlen;
	if (i == 0)
		return (destlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (destlen + (s - src));
}
