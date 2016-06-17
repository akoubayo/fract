/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_oct_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 18:17:33 by daltman           #+#    #+#             */
/*   Updated: 2016/04/11 19:16:28 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_lgstr(long unsigned int n)
{
	int					size;

	size = 0;
	while (n)
	{
		n = n / 8;
		size++;
	}
	return (size);
}

static char			ft_base(int i)
{
	int	c;
	int j;

	j = 8;
	if (i <= 8)
		return (i + '0');
	c = 0;
	while (j++ < i)
	{
		c++;
		if (c == 9)
			c = 1;
	}
	return (c);
}

static char			*ft_fillstr(char *str, long unsigned int n, int size)
{
	size = size - 2;
	while (n >= 8)
	{
		str[size--] = ft_base(n % 8);
		n = n / 8;
	}
	str[size] = ft_base(n);
	return (str);
}

char				*ft_itoa_base_oct_l(long unsigned int n)
{
	char				*str;
	int					size;

	if (n != 0)
	{
		size = ft_lgstr(n);
		str = ft_strnew(size + 1);
		if (str == NULL)
			return (NULL);
		ft_fillstr(str, n, size + 1);
	}
	else
	{
		str = ft_strnew(1);
		*str = '0';
	}
	return (str);
}
