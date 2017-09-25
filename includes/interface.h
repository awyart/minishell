/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 14:52:25 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H

void	ft_cd(char **argv, char **env);
void	ft_echo(char **argv, char **env);
void	ft_setenv( char **argv, char **env);
void	ft_env(char **argv, char **env);
void	ft_exit(char **argv, char **env);
void	ft_pwd(char **argv, char **env);

extern t_func g_build[];

#endif