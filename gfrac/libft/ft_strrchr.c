/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:41:30 by jchen             #+#    #+#             */
/*   Updated: 2015/12/21 12:22:01 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		*pos;
	char		*as;

	pos = NULL;
	as = (char*)s;
	while (*as != '\0')
	{
		if (*as == c)
			pos = as;
		as++;
	}
	if (c == 0)
		return (as);
	return (pos);
}
