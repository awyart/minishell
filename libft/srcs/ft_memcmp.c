/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:42:25 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 15:42:26 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sch1;
	unsigned char	*sch2;
	size_t			i;

	i = 0;
	sch1 = (unsigned char*)s1;
	sch2 = (unsigned char*)s2;
	while (i < n)
	{
		if (sch1[i] == sch2[i])
			i++;
		else
			return (sch1[i] - sch2[i]);
	}
	return (0);
}
