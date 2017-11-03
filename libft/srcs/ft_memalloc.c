/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:58:27 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 21:11:20 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	if (!(mem = (char*)malloc(sizeof(char) * size)))
		return (0);
	while (size--)
		mem[size] = 0;
	return ((void*)mem);
}
