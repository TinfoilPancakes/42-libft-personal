/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:30:08 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 21:30:08 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*iter_o;
	t_list	*iter_n;

	new_list = f(lst);
	if (new_list)
	{
		iter_o = lst->next;
		iter_n = new_list;
		while (iter_o)
		{
			iter_n->next = f(iter_o);
			iter_o = iter_o->next;
			iter_n = iter_n->next;
		}
	}
	return (new_list);
}
