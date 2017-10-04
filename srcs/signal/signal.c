/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 23:25:09 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 21:09:09 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_signal(int sig)
{
	if (sig == SIGINT)
		PRINTF("Vous avez cliqué sur Ctrl + C\n");
	else if (sig == SIGABRT)
		PRINTF("Abort\n");
	else if (sig == SIGSEGV)
		PRINTF("AHAHAHA c'est un segfault\n");
	else if (sig == SIGBUS)
		PRINTF("BUS ERROR\n");
	else if (sig == SIGFPE)
		PRINTF("Floating point exception\n");
	else
		PRINTF("ERREUR non identifiée par awsh <%d>\n", sig);
}

void	ft_signal2(int sig)
{
	if (g_i == g_shlvl)
	{
		if (sig == SIGINT)
			PRINTF("Vous avez cliqué sur Ctrl + C\n");
		else if (sig == SIGABRT)
			PRINTF("Abort\n");
		else if (sig == SIGSEGV)
			PRINTF("AHAHAHA c'est un segfault\n");
		else if (sig == SIGBUS)
			PRINTF("BUS ERROR\n");
		else if (sig == SIGFPE)
			PRINTF("Floating point exception\n");
		else
			PRINTF("ERREUR non identifiée par awsh <%d>\n", sig);
		ft_doprompt();
	}
}

void	ft_getsignal(void)
{
	signal(SIGINT, &ft_signal2);
	signal(SIGHUP, &ft_signal2);
	signal(SIGABRT, &ft_signal2);
	signal(SIGSEGV, &ft_signal2);
	signal(SIGBUS, &ft_signal2);
}
