/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 23:25:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 18:18:30 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_signal(int sig)
{
	if (sig == SIGINT)
	{
		PRINTF("Vous avez cliqué sur Ctrl + C\n");
		return ;
	}
	else if (sig == SIGABRT)
		PRINTF("Abort\n");
	else if (sig == SIGSEGV)
		PRINTF("AHAHAHA c'est un segfault\n");
	else if (sig == SIGBUS)
		PRINTF("BUS ERROR\n");
	else
		PRINTF("ERREUR\n");
	exit(1);
}

void ft_getsignal(void)
{
	signal(SIGINT, &ft_signal);
	signal(SIGHUP, &ft_signal);
	signal(SIGABRT, &ft_signal);
	signal(SIGSEGV, &ft_signal);
	signal(SIGBUS, &ft_signal);
	signal(SIGINT, &ft_signal);
}