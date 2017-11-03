/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 21:52:55 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 21:11:03 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_init_env(char **environ)
{
	int		i;
	int		size;

	size = ft_strlend(environ);
	i = -1;
	if (!(g_environ = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	while (environ[++i] != NULL)
	{
		if (strncmp(environ[i], "SHLVL=", 6) == 0)
		{
			g_i = (int)(environ[i][6] - 48) + 1;
			g_environ[i] = ft_strjoinc("SHLVL=", g_i + 48);
		}
		else
			g_environ[i] = ft_strdup(environ[i]);
	}
	g_environ[i] = NULL;
	i = -1;
	while (++i < BUFF_SIZE)
	{
		g_prec[i] = '\0';
		g_next[i] = '\0';
	}
	return (1);
}

int	ft_init_env_n(void)
{
	if (!(g_environ = (char **)ft_memalloc(sizeof(char *) * (1))))
		return (0);
	g_environ[0] = NULL;
	return (1);
}

int	ft_get_env(char **environ)
{
	if (environ[0] == NULL)
	{
		if (ft_init_env_n() == 0)
			return (0);
	}
	else
	{
		if (ft_init_env(environ) == 0)
			return (0);
	}
	return (1);
}
