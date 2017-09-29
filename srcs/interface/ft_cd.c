/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:09:09 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:36:57 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void ft_change_pwd()
{
	int i;
	char *str;
	char buf[1024];

	i = ft_get_pwd();
	str = getcwd(buf, 1024);
	g_environ[i] = ft_strjoinh("PWD", str);
}

int		ft_cd(char **argv)
{
	if (argv[2] != NULL)
		ft_printf("Ne placer qu'un seul argument\n");
	else
	{
		if ((chdir(argv[1]) == 0))
			ft_change_pwd();
		else
			ft_printf("cd: %s: no directory\n", argv[1]);
	}
	return (1);
}