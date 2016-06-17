/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:14:51 by jchen             #+#    #+#             */
/*   Updated: 2015/12/16 22:15:33 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *src1, const char *src2, size_t len)
{
	const char	*s1;
	const char	*s2;
	size_t		i;

	i = 0;
	while (*src1 != '\0' && len != 0)
	{
		s1 = src1;
		s2 = src2;
		i = len;
		while (*s2 != '\0' && *s1 == *s2 && i != 0)
		{
			s1++;
			s2++;
			i--;
		}
		if (*s2 == '\0')
			return ((char *)src1);
		src1++;
		len--;
	}
	return (NULL);
}
