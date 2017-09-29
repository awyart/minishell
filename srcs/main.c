/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:24:01 by awyart           ###   ########.fr       */
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
	while (environ[++i])
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
		return (ret);
	}
	ft_printf("awsh: command not found: %s\n", argv[0]);
	return(0);

	//afficer l'erreur
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
		argv = ft_strsplit(cmd[i], ' '); //faire un split un peu plus intelligent ici;
		ret = ft_process(argv);
		//free des trucs
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


	ft_init_env();// initalise la variable globale environnement
	while (42)
	{
		PRINTF("$>");
		get_next_line(1, &line);
		cmd = ft_strsplit(line, ';');
		ret = ft_start(cmd);
		//faut free des trucs la
		if (ret == -1)
			break ; 
	}
	//free des trucs la aussi
	return (0);
}