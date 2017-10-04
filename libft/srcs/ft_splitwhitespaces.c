/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitwhitespaces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 19:51:39 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 21:05:42 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strsdup(char *src, int size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(*str) * (size + 1));
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int		ft_nbmots(char *str)
{
	int i;
	int count;
	int pos;

	i = 0;
	count = 0;
	pos = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (i - pos > 0)
				count++;
			pos = i + 1;
		}
		i++;
	}
	if (i - pos > 1)
		count++;
	return (count);
}

char			**ft_split_whitespaces(char *str)
{
	int		nbmots;
	char	**dest;
	int		i;
	int		pos;
	int		j;

	i = -1;
	j = 0;
	pos = 0;
	nbmots = ft_nbmots(str);
	dest = (char**)ft_memalloc(sizeof(*dest) * (nbmots + 1));
	while (str[++i])
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (i - pos > 0)
				dest[j++] = ft_strsdup(str + pos, i - pos);
			pos = i + 1;
		}
	if (i - pos > 0)
		dest[j++] = ft_strsdup(str + pos, i - pos);
	dest[j] = 0;
	return (dest);
}
