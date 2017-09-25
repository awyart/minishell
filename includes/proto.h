/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:09:38 by awyart            #+#    #+#             */
/*   Updated: 2017/09/25 15:17:47 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

char 					*ft_loadfunction(char **av, char *path);
char					**ft_loadenv(void);
void					ft_check_bi(t_func listf[QSIZE]);
int 					ft_apply_bi(char **av, t_func listf[QSIZE], char **env);
int						ft_apply_fct(char *str, char **av);
int						ft_apply_fct0(char *str, char **av);

#endif