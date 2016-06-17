/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:16:05 by jchen             #+#    #+#             */
/*   Updated: 2015/12/17 13:17:41 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *src1, const char *src2)
{
	const char	*s1;
	const char	*s2;

	if (*src1 == '\0' && *src2 == '\0')
		return ((char*)src1);
	while (*src1 != '\0')
	{
		s1 = src1;
		s2 = src2;
		while (*s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ((char*)src1);
		src1++;
	}
	return (NULL);
}
