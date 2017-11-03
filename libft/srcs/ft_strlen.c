/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 10:49:33 by awyart            #+#    #+#             */
/*   Updated: 2017/09/27 18:05:42 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

size_t	ft_strlend(char **s)
{
	int size;

	size = 0;
	while (s[size] != NULL)
	{
		size++;
	}
	return (size);
}
