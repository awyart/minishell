/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:29:38 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:41:02 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_env(char *path, char **argv, char **env)
{
	char *lgpath;

	lgpath = ft_strjoin(path, "/env");
	//ft_printf("env loaded\n");
	//ft_printf("%s\n", lgpath);
	execve(lgpath, argv, env);
}