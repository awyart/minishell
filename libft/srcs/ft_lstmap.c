/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 02:27:43 by awyart            #+#    #+#             */
/*   Updated: 2017/04/13 02:27:45 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*new;

	if (!lst)
		return (NULL);
	list = (*f)(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = (*f)(lst);
		list = list->next;
	}
	return (new);
}
