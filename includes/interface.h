/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 18:49:46 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H
# define QSIZE 6

int	ft_cd(char **argv);
int	ft_echo(char **argv);
int	ft_setenv(char **argv);
int	ft_env(char **argv);
int	ft_exit(char **argv);
int	ft_unsetenv(char **argv);

#endif
