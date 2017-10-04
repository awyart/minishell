/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:08:35 by awyart            #+#    #+#             */
/*   Updated: 2017/10/04 21:05:22 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

char				**g_environ;
char				g_next[1024];
char				g_prec[1024];
int					g_ret;
int					g_shlvl;
int					g_i;

typedef struct		s_func
{
	char			*cmd;
	int				(*f)(char **argv);
}					t_func;

#endif
