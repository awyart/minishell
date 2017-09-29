/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 15:20:28 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H
# define QSIZE 6

int	ft_cd(char **argv);
int	ft_echo(char **argv);
int	ft_setenv( char **argv);
int	ft_env(char **argv);
int	ft_exit(char **argv);
int	ft_unsetenv(char **argv);

t_func g_build[] = 
{
	{"cd",0, &ft_cd},
	{"env",0, &ft_env},
	{"setenv", 0, &ft_setenv},
	{"exit", 0, &ft_exit},
	{"echo", 0, &ft_echo},
	{"unsetenv", 0, &ft_unsetenv}
};

#endif