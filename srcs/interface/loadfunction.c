/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadfunction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:43:31 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:13:28 by awyart           ###   ########.fr       */
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
			return (ft_strjoin(place[i], "/"));
		i++;
	}
	return (NULL);
}

char 		*ft_loadfunction(char **av, char *path)
{
	char *exe;

	if ((exe = ft_seekpath(av[0], path)) != 0)
	{
		return (exe);
	}
	else
	{
		ft_printf(" \" %s \" didn't load\n", av[0]);
		return (NULL);
	}
}
