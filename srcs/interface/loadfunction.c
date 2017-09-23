/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadfunction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:43:31 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:42:37 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int 		ft_exist(char *str, char *place)
{
	DIR				*dir;
	struct dirent	*ret;

	dir = opendir(place);
	if (dir == NULL)
		return (0);
	while ((ret = readdir(dir)) > 0)
	{
		if (ft_strcmp(ret->d_name, str) == 0)
		{
			return (1);
		}
	}
	return (0);
}

char  		*ft_seekpath(char *str, char *path)
{
	char 	**place;
	int		i;

	i = 0;
	place = ft_strsplit(path, ':');
	while (place[i])
	{
		if (ft_exist(str, place[i]))
			return (place[i]);
		i++;
	}
	return (NULL);
}

void 		ft_loadFunction(t_func listf[QSIZE], char *path)
{
	int		i;

	i = -1;
	while (++i < QSIZE)
	{
		if ((listf[i].path = ft_seekpath(listf[i].cmd, path)) == 0)
			ft_printf(" \" %s \" didn't load\n", listf[i].cmd);
		else
		{
			ft_printf(" \" %s \" loaded\n", listf[i].cmd);
			ft_printf(" --> %s\n", listf[i].path);
		}
	}
}
