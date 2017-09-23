/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 23:22:54 by awyart            #+#    #+#             */
/*   Updated: 2017/09/24 00:00:22 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_pwd(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/pwd");
	//ft_printf("pwd loaded\n");
	//ft_printf("%s\n", lgpath);
	execve(lgpath, argv, env);
}