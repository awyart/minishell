/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:37:22 by awyart            #+#    #+#             */
/*   Updated: 2017/09/21 16:13:10 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include "../libft/includes/libft.h"
#include "../libft/ft_printf/libftprintf/ft_printf.h"
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>

#define PRINTF ft_printf

#ifndef BUFF_SIZE
# define BUFF_SIZE 1000
#endif

#define QSIZE 5

#define USER env[0]
#define LOGNAME env[1]
#define HOME env[2]
#define LANG env[3]
#define PATH env[4]
#define PWD env[5]
#define SHELL env[6]
#define TERM env[7]
#define PAGER env[8]
#define EDITOR env[9]

typedef struct		s_func
{
	int				pos;
	char			cmd[32];
	char			*path;
	void			(*f)(/*insert smthg here*/)
}					t_func;

//typedef struct		s_env
//{
//	char			*user;
//	char			*logname;
//	char			*home;
//	char			*lang;
//	char			*path;
//	char 			*pwd;
//	char			*shell;
//	char 			*term;
//	char 			*pager;
//	char 			*editor;
//}					t_env;
//
//void				ft_loadFunction(t_func *listf);
char *str = "ABC";



#endif