/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/10/02 22:10:12 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


void ft_init_env()
{
	int i;
	int size;

	size = ft_strlend(environ);
	i = -1;
	g_environ = (char **)malloc(sizeof(char *) * (size + 1));
	while (environ[++i] != NULL)
	{
		g_environ[i] = ft_strdup(environ[i]);
	}
}

int ft_process(char **argv)
{
	int ret;
	int ipath;
	char *tmp;

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

int ft_start(char **cmd)
{
	int i;
	int ret;
	char **argv;

	i = -1;
	ret = 0;
	while (cmd[++i])
	{
		argv = ft_strsplit(cmd[i], ' ');
		ret = ft_process(argv);
		ft_freechar2(argv);
		if (ret == -1)
			break ;
	}
	return (ret);
}

int main(void)
{
	int ret;
	char **cmd;
	char *line;

	ft_init_env();
	while (42)
	{
		PRINTF("$>");
		get_next_line(1, &line);
		cmd = ft_strsplit(line, ';');
		ft_strdel(&line);
		ret = ft_start(cmd);
		ft_freechar2(cmd);
		if (ret == -1)
			break ; 
	}
	ft_freechar2(g_environ);
	return (0);
}