/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:44:45 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:05:40 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ft_launch(char *str, char **av)
{
	pid_t		father;

	father = fork();
	if (father > 0)
	{
		wait(0);
	}
	if (father == 0)
	{
		execve(str,av, g_environ);
	}
}

int ft_apply_fct0(char *str, char **av)
{
	if (access(str, X_OK) == -1)
		return (0);
	else
	{
		ft_launch(str, av);
		return (1);
	}
}

int ft_apply_fct(char *str, char **av)
{
	char *lgpath;

	if (access(str, X_OK) == -1)
		return (0);
	else
	{
		lgpath = ft_strjoin(str, av[0]);
		ft_launch(lgpath, av);
		return (1);
	}
}