/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:55:27 by awyart            #+#    #+#             */
/*   Updated: 2017/09/24 00:04:30 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_ls(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/ls");
	//ft_printf(" ls loaded\n");
	//ft_printf("%s\n", lgpath);
	(void)env;
	execve(lgpath, argv, NULL);
}