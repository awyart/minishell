/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/09/29 16:11:16 by awyart           ###   ########.fr       */
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
	{"cd", &ft_cd},
	{"env", &ft_env},
	{"setenv", &ft_setenv},
	{"exit", &ft_exit},
	{"echo", &ft_echo},
	{"unsetenv", &ft_unsetenv}
};

#endif