/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 21:08:53 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_process(char **argv)
{
	int		ret;
	int		ipath;
	char	*tmp;

	ipath = ft_get_path();
	if ((ret = ft_apply_bi(argv)) != 0)
		return (ret);
	if ((ret = ft_apply_fct0(argv[0], argv)) != 0)
		return (ret);
	if (((ipath >= 0 &&
			(tmp = ft_loadfunction(argv, g_environ[ipath])) != NULL)))
	{
		ret = ft_apply_fct(tmp, argv);
		ft_strdel(&tmp);
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

	while (1)
	{
		getcwd(g_next, 1024);
		ft_doprompt();
		get_next_line(1, &line);
		cmd = ft_strsplit(line, ';');
		ft_strdel(&line);
		if (cmd)
		{
			g_ret = ft_start(cmd);
			ft_freechar2(cmd);
		}
		if (g_ret == -1)
			break ;
	}
}

int		main(int ac, char **av, char **environ)
{
	g_i = 2;
	ft_header(ac, av);
	setlocale(LC_ALL, "");
	ft_get_env(environ);
	ft_getsignal();
	g_ret = 0;
	ft_boucle();
	ft_freechar2(g_environ);
	return (0);
}
