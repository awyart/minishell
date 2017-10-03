/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 23:25:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/03 22:28:57 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_signal(int sig)
{
	if (sig == SIGINT)
	{
		ft_printf(" Vous avez cliqué sur Ctrl + C\n");
		kill(1, sig);
	}
	else if (sig == SIGHUP)
	{
		ft_printf("Vous avez cliqué sur Ctrl + D\n");
		exit(0);
	}
	else
	{
		ft_printf("id du sig : %i\n", sig);
		kill(1, sig);
	}
	PRINTF("\033[34m%s\033[33m > \033[0m", g_next);
}
