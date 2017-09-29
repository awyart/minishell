/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:08:35 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 14:55:48 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

/*typedef struct		s_envir
{
	char			*user;
	char			*logname;
	char			*home;
	char			*lang;
	char			*path;
	char 			*pwd;
}					t_envir;*/

typedef struct		s_func
{
	char			*cmd;
	char			*path;
	int				(*f)(char **argv);
}					t_func;

#endif