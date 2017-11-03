/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:15:26 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 21:08:58 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strjoinh(char *s1, char *s2)
{
	char	*str;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = NULL;
	str = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (s1[i])
		*ptr++ = s1[i++];
	*ptr++ = '=';
	while (s2[j])
		*ptr++ = s2[j++];
	*ptr++ = '\0';
	return (str);
}

char	*ft_strjoinp(char *s1, char *s2)
{
	char	*str;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	ptr = str;
	while (s1[i])
		*ptr++ = s1[i++];
	*ptr++ = '/';
	while (s2[j])
		*ptr++ = s2[j++];
	*ptr++ = '\0';
	return (str);
}

char	*ft_strjoinc(char *s1, char s2)
{
	char	*str;
	char	*ptr;
	int		i;

	i = 0;
	if ((str = (char *)malloc(ft_strlen(s1) + 2)) == NULL)
		return (NULL);
	ptr = str;
	while (s1[i])
		*ptr++ = s1[i++];
	*ptr++ = s2;
	*ptr++ = '\0';
	return (str);
}
