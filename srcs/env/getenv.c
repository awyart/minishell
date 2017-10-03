/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 21:52:55 by awyart            #+#    #+#             */
/*   Updated: 2017/10/03 22:17:16 by awyart           ###   ########.fr       */
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
	ft_printf("ENV VIDE CREE\n");
	g_environ = (char **)malloc(sizeof(char *) * (1));
	g_environ[0] = NULL;
}

void	ft_get_env(char **environ)
{
	if (environ == NULL)
		ft_init_env_n();
	else
		ft_init_env(environ);
}
