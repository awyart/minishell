/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadfunction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:43:31 by awyart            #+#    #+#             */
/*   Updated: 2017/09/21 16:13:28 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int 		ft_exist(char str, char *place)
{
	dir*dir;

	dir = opendir(place);
	if (dir = NULL)
		return (0);
	while (ret = readdir(dir) > 0)
	{
		if (ft_strcmp(ret->d_name, str) == 0)
		{
			return (1);
		}
	}
	close(dir);
	return (0);
}

char  		*ft_seekpath(char *path)
{
	char 	**place;
	int		i;

	place = ft_strsplit(path, ':');
	while (place[i])
	{
		if (ft_exist(str[i], place[i]))
			return (place[i]);
		i++;
	}
	//ft_memdel(place);
	return (NULL);
}

void 		ft_loadFunction(t_func *listf, char *path)
{
	int		i;

	i = -1;
	while (++i < QSIZE)
	{
		listf[i]->pos = g_env[i].pos;
		ft_strcpy(listf[i]->cmd, g_env[i].cmd); 
		if ((listf[i]->path = ft_seekpath(g_env[i].cmd, path)) == 0)
			ft_printf(" \" %s \" didn't load", listf[i]->cmd);
		else
			ft_printf(" \" %s \" loaded", listf[i]->cmd);
		listf[i]->f =  g_env[i].f;
	}
}