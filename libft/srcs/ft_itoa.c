/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:00:12 by awyart            #+#    #+#             */
/*   Updated: 2017/04/12 21:00:14 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_int(int n, int base)
{
	if (n == -2147483648)
		return (11);
	if (n < 0)
		return (1 + ft_size_int(-(n), base));
	if (n == 0)
		return (1);
	if (n >= base)
		return (1 + ft_size_int(n / base, base));
	return (1);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			size;
	size_t			i;
	unsigned int	un;

	i = 0;
	size = ft_size_int(n, 10);
	if (!(str = ft_strnew(size)))
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		un = -(n);
		i++;
	}
	else
		un = n;
	while (i < size)
	{
		str[i] = un / ft_recursive_power(10, size - i - 1) + '0';
		un = un % ft_recursive_power(10, size - i - 1);
		i++;
	}
	return (str);
}
