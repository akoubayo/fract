/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 20:47:11 by jchen             #+#    #+#             */
/*   Updated: 2015/12/21 12:10:28 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char			tmp[len];
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	while (i < len)
	{
		tmp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst2[i] = tmp[i];
		i++;
	}
	return (dst);
}
