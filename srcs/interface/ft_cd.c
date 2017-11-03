/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:09:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/06 18:22:57 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "interface.h"

static void	ft_change_pwd(void)
{
	int		i;
	char	**av;

	i = ft_get_pwd();
	if (i >= 0)
	{
		if (g_environ[i])
			free(g_environ[i]);
		g_environ[i] = ft_strjoinh("PWD", g_next);
	}
	else
	{
		av = (char **)ft_memalloc(sizeof(char*) * (4));
		av[0] = ft_strdup("setenv");
		av[1] = ft_strdup("PWD");
		av[2] = ft_strdup(g_next);
		av[3] = NULL;
		ft_setenv(av);
		ft_freechar2(av);
	}
}

int			ft_cd(char **argv)
{
	if (ft_strlend(argv) == 1 || argv[1][0] == '~')
	{
		if (ft_strlend(argv) != 1 && argv[1][0] == '~')
			free(argv[1]);
		argv[1] = ft_strdup(HOME);
		argv[2] = NULL;
	}
	else if (argv[1][0] == '-')
	{
		if (argv[1])
			free(argv[1]);
		argv[1] = ft_strdup(g_prec);
		argv[2] = NULL;
	}
	if ((chdir(argv[1]) == 0))
	{
		ft_strcpy(g_prec, g_next);
		getcwd(g_next, BUFF_SIZE);
		ft_change_pwd();
	}
	else
		PRINTF("cd: %s: no directory\n", argv[1]);
	return (1);
}
