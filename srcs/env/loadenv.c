/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadenv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:40:01 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:46:40 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern char **environ;

char **ft_loadenv(void)
{
	int			i;
	char		**aop;

	i = 0;
	if (!(aop = (char **)malloc((sizeof(char *) * (SIZEENV + 1)))))
		return(NULL);
	while (environ[i])
	{
		if (!(aop[i] = ft_strdup(environ[i])))
			return (0);
		//ft_printf("%d : %s: <%s>\n", i, environ[i], aop[i]);
		i++;
	}
	//if (!(aop[0] = ft_strdup(environ[USER])))
	//	return(0);
	//if (!(aop[1] = ft_strdup(environ[LOGNAME])))
	//	return(0);
	//if (!(aop[2] = ft_strdup(environ[HOME])))
	//	return(0);
	//if (!(aop[3] = ft_strdup(environ[LANG])))
	//	return(0);
	//if (!(aop[4] = ft_strdup(environ[PATH])))
	//	return(0);
	//if (!(aop[5] = ft_strdup(environ[PWD])))
	//	return(0);
	return (aop);
}