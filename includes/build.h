/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:10:48 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 21:38:06 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILD_H
# define BUILD_H

# include "interface.h"

typedef struct s_func	t_func;

t_func g_build[] =
{
	{"cd", &ft_cd},
	{"env", &ft_env},
	{"setenv", &ft_setenv},
	{"exit", &ft_exit},
	{"echo", &ft_echo},
	{"unsetenv", &ft_unsetenv}
};

#endif
