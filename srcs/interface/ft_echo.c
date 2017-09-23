/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:46 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:45:51 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_echo(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/echo");
	//ft_printf("echo loaded\n");
	//ft_printf("%s\n", lgpath);
	(void)env;
	execve(lgpath, argv, NULL);
}