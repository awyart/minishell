/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:32:48 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 13:32:52 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, const char *to_find, size_t n)
{
	size_t i;
	size_t j;
	size_t tf_size;

	i = 0;
	j = 0;
	tf_size = 0;
	while (to_find[tf_size])
		tf_size++;
	if (tf_size == 0)
		return (str);
	while (str[i] && i < n)
	{
		while ((to_find[j] == str[i + j]) && (i + j < n))
		{
			if (j == tf_size - 1)
			{
				return (str + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
