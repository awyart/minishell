/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:49 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:40:58 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_exit(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/exit");
	//ft_printf("exit loaded\n");
	//ft_printf("%s\n", lgpath);
	execve(lgpath, argv, env);
}