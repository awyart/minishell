/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:01:00 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 14:01:01 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	size;
	char	*sch;

	size = ft_strlen(str);
	i = 1;
	sch = (char*)str;
	if (c == 0)
		return (sch + size);
	while (sch[size - i] != c && i <= size)
		i++;
	if (i == size + 1)
		return (0);
	return (sch + size - i);
}
