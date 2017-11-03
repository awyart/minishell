/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 18:50:47 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 21:04:51 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_header(int ac, char **av)
{
	write(1, "\e[1;1H\e[2J", 11);
	ac = 3;
	av[0][2] = 'm';
	PRINTF("Bienvenue dans le\033[34m Minishell\033[0m");
	PRINTF(" d'\033[32mAmaury\033[0m\n");
}

void	ft_doprompt(void)
{
	PRINTF("\033[34m%s\033[33m > \033[0m", g_next);
}
