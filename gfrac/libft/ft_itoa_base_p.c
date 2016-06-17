/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 18:11:23 by daltman           #+#    #+#             */
/*   Updated: 2016/04/11 19:15:44 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lgstr(unsigned long long int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

static char	ft_base(int i, int maj)
{
	char	c;
	int		j;

	j = 9;
	if (i <= 9)
		return (i + '0');
	if (maj == 0)
		c = 'a';
	else
		c = 'A';
	while (++j < i)
	{
		c++;
		if (c == 'g')
			c = 'a';
		else if (c == 'G')
			c = 'A';
	}
	return (c);
}

static char	*ft_fillstr(char *str, unsigned long long int n, int size, int maj)
{
	size = size - 2;
	while (n >= 16)
	{
		str[size--] = ft_base(n % 16, maj);
		n = n / 16;
	}
	str[size] = ft_base(n, maj);
	return (str);
}

char		*ft_itoa_base_p(void *a, int maj)
{
	char					*str;
	int						size;
	unsigned long long int	n;

	n = (unsigned long long int)a;
	if (n != 0)
	{
		size = ft_lgstr(n);
		str = ft_strnew(size + 1);
		if (str == NULL)
			return (NULL);
		ft_fillstr(str, n, size + 1, maj);
	}
	else
	{
		str = ft_strnew(1);
		*str = '0';
	}
	return (str);
}
