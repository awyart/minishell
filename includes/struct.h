/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:08:35 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 14:59:59 by awyart           ###   ########.fr       */
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
	void			(*f)(char **argv, char **env);
}					t_func;

#endif