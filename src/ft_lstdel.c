/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:13:51 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 21:13:51 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_memory.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*iter;
	t_list	*prev;

	iter = *alst;
	while (iter)
	{
		del(iter->content, iter->content_size);
		prev = iter;
		iter = iter->next;
		ft_memdel((void **)&prev);
	}
	*alst = NULL;
}
