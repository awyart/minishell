/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:25:28 by awyart            #+#    #+#             */
/*   Updated: 2017/04/11 11:25:30 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, const char *to_find)
{
	int i;
	int j;
	int tf_size;

	i = 0;
	j = 0;
	tf_size = 0;
	while (to_find[tf_size])
		tf_size++;
	if (tf_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
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
