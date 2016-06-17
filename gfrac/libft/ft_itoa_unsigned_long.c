/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:45:25 by jchen             #+#    #+#             */
/*   Updated: 2016/04/11 18:05:46 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lgstr(unsigned long long int n)
{
	int					size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static	char	*ft_fillstr(char *str, unsigned long long int n, int size)
{
	if (n == 0)
	{
		*str = '-';
		n = n * -1;
		size--;
	}
	else
		size = size - 2;
	while (n >= 10)
	{
		str[size--] = n % 10 + '0';
		n = n / 10;
	}
	str[size] = n + '0';
	return (str);
}

char			*ft_itoa_unsigned_long(unsigned long long int n)
{
	char								*str;
	unsigned long long int				size;

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
