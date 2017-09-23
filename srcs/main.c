/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:28:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/24 00:03:48 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_func g_envi[] =
{
	{"ls", 0, &ft_ls},
	{"cd", 0, &ft_cd},
	{"echo", 0, &ft_echo},
	{"env", 0, &ft_env},
	{"setenv",0, &ft_setenv},
	{"exit", 0, &ft_exit},
	{"pwd", 0, &ft_pwd}
	//man
};

void ft_process(t_func listf[QSIZE], char **env)
{
	pid_t		father;
	char		*line;
	char		**av;
	int			i;

	while (1)
	{
		father = fork();
		if (father > 0)
		{
			PRINTF("$>");
			wait(0);
		}
		if (father == 0)
		{
			get_next_line(1, &line);
			av = ft_strsplit(line, ' ');
			i = -1;
			while (++i < QSIZE)
			{
				if (ft_strcmp(av[0], listf[i].cmd) == 0)
				{
					if (listf[i].path)
						listf[i].f(listf[i].path, av, env);
					else
						ft_printf("Error\n");
					break;
				}
			}
			if (i == QSIZE)
				ft_printf("awsh: command not found: %s\n", av[0]);
		}
	}
}

int main(int ac, char **av, char **env)
{
	t_func listf[QSIZE];
	int i;


	(void)av;
	if (ac != 1)
	{
		ft_printf("pas d'argument pls");
		return (0);
	}
	//env = ft_loadenv();
	i = -1;
	while (++i < QSIZE)
		listf[i] = g_envi[i];
	ft_loadFunction(listf, env[PATH]);
	ft_process(listf, env);
}