/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:09:09 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:27:51 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cd(char **argv, char **env)
{
	(void)env;
	if (argv[1] == NULL)
		chdir("~/");
	else if (argv[2] != NULL)
		ft_printf("Ne placer qu'un seul argument\n");
	else
		chdir(argv[1]);
}