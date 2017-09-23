/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:09:09 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:49:07 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cd(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/cd");
	//ft_printf("cd loaded\n");
	//ft_printf("%s\n", lgpath);
	execve(lgpath, argv, env);
}