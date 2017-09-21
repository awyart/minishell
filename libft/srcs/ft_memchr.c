/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:40:19 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 15:40:20 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sch;
	size_t			i;

	i = 0;
	sch = (unsigned char*)s;
	while (i < n)
	{
		if (sch[i] == (unsigned char)c)
			return (sch + i);
		i++;
	}
	return (NULL);
}
