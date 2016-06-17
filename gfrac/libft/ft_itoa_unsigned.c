/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 18:06:04 by daltman           #+#    #+#             */
/*   Updated: 2016/04/11 19:09:19 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_lgstr(unsigned int n)
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

static	char			*ft_fillstr(char *str, unsigned int n, int size)
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

char					*ft_itoa_unsigned(unsigned int n)
{
	char							*str;
	unsigned int					size;

	if (n == 4294967295)
	{
		str = ft_strdup("4294967295");
		if (str == NULL)
			return (NULL);
	}
	else if (n != 0)
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
