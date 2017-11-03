/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:08:35 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 19:13:22 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

char				**g_environ;
char				g_next[BUFF_SIZE];
char				g_prec[BUFF_SIZE];
int					g_ret;
int					g_shlvl;
int					g_i;

typedef struct		s_func
{
	char			*cmd;
	int				(*f)(char **argv);
}					t_func;

#endif
