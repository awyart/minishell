/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:44:45 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:17:24 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_apply_fct0(char *str, char **av)
{
	if (access(str, X_OK) == -1)
		return (0);
	else
	{
		execve(str, av, NULL);
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
		execve(lgpath, av, NULL);
		return (1);
	}
}