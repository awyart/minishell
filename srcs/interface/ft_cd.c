/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:09:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/03 19:39:43 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_change_pwd(void)
{
	int i;

	i = ft_get_pwd();
	ft_strdel(&(g_environ[i]));
	g_environ[i] = ft_strjoinh("PWD", g_next);
}

int			ft_cd(char **argv)
{
	if (argv[2] != NULL)
		PRINTF("Ne placer qu'un seul argument\n");
	else
	{
		if (strcmp(argv[1], "-") == 0)
			ft_strcpy(argv[1], g_prec);
		if (strcmp(argv[1], "~") == 0)
			ft_strcpy(argv[1], HOME);
		if ((chdir(argv[1]) == 0))
		{
			ft_strcpy(g_prec, g_next);
			getcwd(g_next, 1024);
			ft_change_pwd();
		}
		else
			PRINTF("cd: %s: no directory\n", argv[1]);
	}
	return (1);
}
