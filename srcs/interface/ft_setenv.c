/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:41 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:41:11 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_setenv(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/setenv");
	//ft_printf("setenv loaded\n");
	//ft_printf("%s\n", lgpath);
	execve(lgpath, argv, env);
}