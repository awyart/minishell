/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:30:37 by awyart            #+#    #+#             */
/*   Updated: 2017/09/21 16:13:13 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_H
# define INTERFACE_H

t_func g_env:
{
	{1,"cd", 0, &ft_cd},
	{2,"echo", 0, &ft_echo},
	{3,"setenv", 0, &ft_setenv},
	{4,"env", 0,&ft_env},
	{5,"exit", 0, &ft_exit}
}; 


#endif