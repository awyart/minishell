/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 21:52:55 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 17:38:30 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_init_env(char **environ)
{
	int		i;
	int		size;

	size = ft_strlend(environ);
	i = -1;
	g_environ = (char **)malloc(sizeof(char *) * (size + 1));
	while (environ[++i] != NULL)
	{
		if (strncmp(environ[i], "SHLVL=", 6) == 0)
			g_environ[i] = ft_strjoinc("SHLVL=",environ[i][6] + 1);
		else
			g_environ[i] = ft_strdup(environ[i]);
	}
	i = 0;
	g_prec[0] = '$';
	g_next[0] = '\0';
	while (++i < 1024)
	{
		g_prec[i] = '\0';
		g_next[i] = '\0';
	}
}

void 	ft_init_env_n(void)
{
	g_environ = (char **)ft_memalloc(sizeof(char *) * (1));
	g_environ[0] = NULL;
}

void	ft_get_env(char **environ)
{
	if (environ[0] == NULL)
		ft_init_env_n();
	else
		ft_init_env(environ);
}
