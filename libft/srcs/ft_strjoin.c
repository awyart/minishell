/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:15:26 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 20:37:13 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((str = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	ptr = str;
	while (s1[i])
		*ptr++ = s1[i++];
	while (s2[j])
		*ptr++ = s2[j++];
	*ptr++ = '\0';
	return (str);
}
