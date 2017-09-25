/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadbuild.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:06:19 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:02:36 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "interface.h"

t_func g_build[] = 
{
	{"cd",0, &ft_cd},
	{"env",0, &ft_env},
	{"setenv", 0, &ft_setenv},
	{"exit", 0, &ft_exit},
	{"echo", 0, &ft_echo}
};

void	ft_check_bi(t_func listf[QSIZE])
{
	int i;

	i = -1;
	while (++i < QSIZE)
	{
		listf[i] = g_build[i];
		ft_printf("%s has been loaded\n", listf[i].cmd);
	}
}

int		ft_apply_bi(char **av, t_func listf[QSIZE], char **env)
{
	int i;

	i = -1;
	while (++i < QSIZE)
	{
		if (ft_strcmp(av[0], listf[i].cmd) == 0)
		{
			listf[i].f(av, env);
			return (1);
		}
	}
	return (0);
}
