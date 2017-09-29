/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadbuild.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:06:19 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:20:07 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "interface.h"

int		ft_apply_bi(char **av)
{
	int i;
	int ret;

	i = -1;
	while (++i < QSIZE)
	{
		if (ft_strcmp(av[0], g_build[i].cmd) == 0)
		{
			ret = g_build[i].f(av);
			return (ret);
		}
	}
	return (0);
}
