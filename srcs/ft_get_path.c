/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 17:11:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/02 22:09:10 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_pwd()
{
	int i;

	i = -1;
	while (g_environ[++i])
	{
		if (ft_strncmp(g_environ[i], "PWD", 3) == 0)
			return (i);
	}
	return (-1);
} 

int	ft_get_path()
{
	int i;

	i = -1;
	while (g_environ[++i])
	{
		if (ft_strncmp(g_environ[i], "PATH", 4) == 0)
			return (i);
	}
	return (-1);
}
