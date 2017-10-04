/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:15:26 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 15:45:01 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strjoinh(char const *s1, char const *s2)
{
	int		total_len;
	char	*tmp;
	int		i;

	i = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if ((tmp = (char *)ft_memalloc(sizeof(char) * (total_len + 3))) == NULL)
		return (0);
	tmp[total_len] = '\0';
	while (*s1)
		tmp[i++] = *s1++;
	tmp[i] = '=';
	i++;
	while (*s2)
		tmp[i++] = *s2++;
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_strjoinp(char const *s1, char const *s2)
{
	int		total_len;
	char	*tmp;
	int		i;

	i = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if ((tmp = (char *)ft_memalloc(sizeof(char) * (total_len + 3))) == NULL)
		return (0);
	tmp[total_len] = '\0';
	while (*s1)
		tmp[i++] = *s1++;
	tmp[i] = '/';
	i++;
	while (*s2)
		tmp[i++] = *s2++;
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_strjoinc(char const *s1, char s2)
{
	int		total_len;
	char	*tmp;
	int		i;

	i = 0;
	total_len = ft_strlen(s1) + 1;
	if ((tmp = (char *)ft_memalloc(sizeof(char) * (total_len + 2))) == NULL)
		return (0);
	tmp[total_len] = '\0';
	while (*s1)
		tmp[i++] = *s1++;
	tmp[i] = s2;
	i++;
	tmp[i] = '\0';
	return (tmp);
}
