/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:38:13 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_setenv(char **argv)
{
	int i;
	char **name;
	int j;

	if (!(argv[1]) || !(argv[2]))
		ft_printf("Merci de preciser 2 parametres\n");
	else
	{
		i = -1;
		while (g_environ[++i])
		{
			name = ft_strsplit(g_environ[i], '=');
			if (ft_strcmp(name[0], argv[1]) == 0)
			{
				g_environ[i] = ft_strjoinh(argv[1], argv[2]);
				return (1);
			}
		}
		j = -1;
		name = (char**)malloc(sizeof(char*) * (i));
		while (g_environ[++j])
			name[j] = g_environ[j];
		g_environ = (char**)malloc(sizeof(char*) * (i + 1));
		g_environ = name;
		g_environ[i] = ft_strjoinh(argv[1], argv[2]);
		g_environ[i + 1] = 0;
		//freename

	}
	return (1);
}

static void ft_deline(char **env, int i)
{
	char 	**name;
	int		p;
	int		size;

	size = ft_strlend(env);
	p = -1;
	name = (char**)malloc(sizeof(char*) *(size));
	while (++p < i)
		name[p] = g_environ[p];
	while (p < size)
	{
		name[p] = g_environ[p + 1];
		p++;
	}
	//freeg_environ;
	g_environ = name;
}

int	ft_unsetenv(char **argv)
{
	int i;
	char **name;

	if (!(argv[1]))
		ft_printf("Merci de preciser 1 parametre\n");
	else
	{
		i = -1;
		while (g_environ[++i])
		{
			name = ft_strsplit(g_environ[i], '=');
			if (ft_strcmp(name[0], argv[1]) == 0)
			{
				ft_deline(g_environ, i);
				return (1);
			}
		}
		ft_printf("%s not set\n", argv[1]);
	}
	return (1);
}