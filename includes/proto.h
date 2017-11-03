/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:09:38 by awyart            #+#    #+#             */
/*   Updated: 2017/10/05 20:53:40 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

char					*ft_loadfunction(char **av, char *path);
char					**ft_loadenv(void);
int						ft_apply_bi(char **av);
int						ft_apply_fct(char *str, char **av);
int						ft_apply_fct0(char *str, char **av);
char					*ft_strjoinh(char *s1, char *s2);
int						ft_get_path(void);
char					*ft_strjoinc(char *s1, char s2);
int						ft_get_pwd(void);
void					ft_freechar2(char **cmd);
void					ft_signal(int i);
void					ft_getsignal(void);
int						ft_get_env(char **environ);
void					ft_header(int ac, char **av);
void					ft_doprompt(void);
char					*ft_strjoinp(char *s1, char *s2);

#endif
