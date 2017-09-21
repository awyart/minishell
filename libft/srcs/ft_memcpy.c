/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:35:38 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 15:35:40 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sourc;
	size_t			i;

	i = 0;
	dest = (unsigned char*)dst;
	sourc = (unsigned char*)src;
	if (n == 0)
		return (dst);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dest);
}
