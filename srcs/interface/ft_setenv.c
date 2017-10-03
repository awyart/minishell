/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:41 by awyart            #+#    #+#             */
/*   Updated: 2017/10/03 22:03:48 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int		ft_realloc(int i, char **name)
{
	int		j;

	j = -1;
	name = (char**)malloc(sizeof(char*) * (i + 2));
	while (g_environ[++j])
		name[j] = ft_strdup(g_environ[j]);
	name[j] = NULL;
	ft_freechar2(g_environ);
	g_environ = (char**)malloc(sizeof(char*) * (i + 2));
	j = -1;
	while (name[++j])
		g_environ[j] = ft_strdup(name[j]);
	ft_freechar2(name);
	return (j);
}

int				ft_setenv(char **argv)
{
	int		i;
	char	**name;

	if (!(argv[1]) || !(argv[2]))
		PRINTF("Merci de preciser 2 parametres\n");
	else
	{
		i = -1;
		while (g_environ[++i])
		{
			name = ft_strsplit(g_environ[i], '=');
			if (ft_strcmp(name[0], argv[1]) == 0)
			{
				ft_strdel(&(g_environ[i]));
				g_environ[i] = ft_strjoinh(argv[1], argv[2]);
				return (1);
			}
			ft_freechar2(name);
		}
		i = ft_realloc(i, name);
		g_environ[i] = ft_strjoinh(argv[1], argv[2]);
		g_environ[i + 1] = NULL;
	}
	return (1);
}

static void		ft_deline(int i)
{
	char	**name;
	int		p;
	int		size;
	int		j;

	size = ft_strlend(g_environ);
	p = -1;
	name = (char**)malloc(sizeof(char*) * (size + 1));
	while (++p < i)
		name[p] = ft_strdup(g_environ[p]);
	while (p < size - 1)
	{
		name[p] = ft_strdup(g_environ[p + 1]);
		p++;
	}
	name[p] = NULL;
	ft_freechar2(g_environ);
	g_environ = (char**)malloc(sizeof(char*) * (size + 1));
	j = -1;
	while (name[++j])
		g_environ[j] = ft_strdup(name[j]);
	g_environ[j] = NULL;
	ft_freechar2(name);
}

int				ft_unsetenv(char **argv)
{
	int		i;
	char	**name;

	if (!(argv[1]))
		PRINTF("Merci de preciser 1 parametre\n");
	else
	{
		i = -1;
		while (g_environ[++i])
		{
			name = ft_strsplit(g_environ[i], '=');
			if (ft_strcmp(name[0], argv[1]) == 0)
			{
				ft_deline(i);
				ft_freechar2(name);
				return (1);
			}
			ft_freechar2(name);
		}
		PRINTF("%s not set\n", argv[1]);
	}
	return (1);
}
