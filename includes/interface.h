/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/09/23 23:30:11 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H

void	ft_cd(char *path, char **argv, char **env);
void	ft_echo(char *path, char **argv, char **env);
void	ft_setenv(char *path, char **argv, char **env);
void	ft_env(char *path, char **argv, char **env);
void	ft_exit(char *path, char **argv, char **env);
void	ft_ls(char *path, char **argv, char **env);
void	ft_pwd(char *path, char **argv, char **env);

#endif