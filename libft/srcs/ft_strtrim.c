/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:21:21 by awyart            #+#    #+#             */
/*   Updated: 2017/04/12 19:21:24 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i_start;
	size_t	i_end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i_end = ft_strlen(s) - 1;
	i_start = 0;
	i = -1;
	while ((s[i_start] == ' ' || s[i_start] == '\n' || s[i_start] == '\t')
				&& i_start < i_end)
		i_start++;
	while ((s[i_end] == ' ' || s[i_end] == '\n' || s[i_end] == '\t')
				&& i_end > i_start)
		i_end--;
	str = ft_strnew(i_end - i_start + 1);
	if (s[0] == '\0')
		return (str);
	if (str != NULL)
		while (++i < i_end - i_start + 1)
			if (!(i == 0 && (s[i_start] == ' ' ||
				s[i_start] == '\n' || s[i_start] == '\t')))
				str[i] = s[i_start + i];
	return (str);
}
