/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 20:16:08 by awyart            #+#    #+#             */
/*   Updated: 2017/11/03 18:01:20 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	ftabort(void)
{
	char tmp[12];

	return ((tmp[13] = 'i'));
}

void	buserror(void)
{
	char *tmp = "coucou";

	tmp[2] = 'd';
}

void	segfault(void)
{
	char *tmp;

	tmp = NULL;
	tmp[6] = 'i';
}

int		main(void)
{
	char c;

	buserror();
	c = ftabort();
	segfault();
	return (0);
}
