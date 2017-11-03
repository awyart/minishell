/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/10/06 18:15:24 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_process(char **argv)
{
	int		ret;
	int		ipath;
	char	*mpa;

	ipath = ft_get_path();
	if ((ret = ft_apply_bi(argv)) != 0)
		return (ret);
	if ((ret = ft_apply_fct0(argv[0], argv)) != 0)
		return (ret);
	if (((ipath >= 0 &&
			(mpa = ft_loadfunction(argv, g_environ[ipath])) != NULL)))
	{
		ret = ft_apply_fct(mpa, argv);
		ft_strdel(&mpa);
		return (ret);
	}
	PRINTF("awsh: command not found: %s\n", argv[0]);
	return (0);
}

int		ft_start(char **cmd)
{
	int		i;
	int		ret;
	char	**argv;

	i = -1;
	ret = 0;
	while (cmd[++i])
	{
		argv = ft_split_whitespaces(cmd[i]);
		if (argv[0] != NULL)
			ret = ft_process(argv);
		ft_freechar2(argv);
		if (ret == -1)
			break ;
	}
	return (ret);
}

void	ft_boucle(void)
{
	char	**cmd;
	char	*line;
	char	*rem;

	line = NULL;
	rem = NULL;
	while (1)
	{
		getcwd(g_next, BUFF_SIZE);
		ft_doprompt();
		get_next_line(0, &line, &rem);
		cmd = ft_strsplit(line, ';');
		ft_strdel(&line);
		if (cmd != NULL)
		{
			g_ret = ft_start(cmd);
			ft_freechar2(cmd);
		}
		if (g_ret == -1)
			break ;
	}
	ft_strdel(&rem);
}

int		main(int ac, char **av, char **environ)
{
	ft_header(ac, av);
	g_i = 2;
	setlocale(LC_ALL, "");
	if (ft_get_env(environ) == 0)
	{
		PRINTF("faux depart, malloc environnement echoué\n");
		return (0);
	}
	g_shlvl = g_i;
	getcwd(g_next, BUFF_SIZE);
	getcwd(g_prec, BUFF_SIZE);
	ft_getsignal();
	g_ret = 0;
	ft_boucle();
	ft_freechar2(g_environ);
	return (0);
}
