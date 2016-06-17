/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:42:00 by jchen             #+#    #+#             */
/*   Updated: 2015/12/17 10:14:43 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	src2 = (const unsigned char*)src;
	dst2 = (unsigned char *)dst;
	while (n > 0)
	{
		*dst2 = *src2;
		if (*src2 == (unsigned char)c)
			return (dst2 + 1);
		dst2++;
		src2++;
		n--;
	}
	return (NULL);
}
