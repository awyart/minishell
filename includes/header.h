/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:37:22 by awyart            #+#    #+#             */
/*   Updated: 2017/10/02 22:59:02 by awyart           ###   ########.fr       */
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
#include <signal.h>

#define PRINTF ft_printf

#ifndef BUFF_SIZE
# define BUFF_SIZE 1000
#endif

#define SIZEENV 6
#define HOME "/Users/awyart"

#include "struct.h"
#include "proto.h"

extern char		**environ;
char 			**g_environ;
char 			g_next[1024];
char 			g_prec[1024];

#endif