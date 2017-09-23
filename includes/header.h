/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:37:22 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:48:39 by awyart           ###   ########.fr       */
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
#include <dirent.h>
#include <sys/types.h>

#define PRINTF ft_printf

#ifndef BUFF_SIZE
# define BUFF_SIZE 1000
#endif

#define QSIZE 7
#define SIZEENV 6
#define USER 16
#define LOGNAME 18
#define HOME 14
#define PATH 11
#define PWD 7
#define LANG 6

#include "struct.h"
#include "proto.h"
#include "interface.h"

extern t_func g_envi[];


#endif