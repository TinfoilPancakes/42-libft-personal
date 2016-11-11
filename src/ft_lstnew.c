/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 12:48:15 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/27 12:48:15 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_memory.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new_node;

	new_node = ft_memalloc(sizeof(t_list));
	if (new_node)
	{
		if (content)
		{
			new_node->content_size = content_size;
			new_node->content = ft_memalloc(content_size);
			if (new_node->content)
				ft_memmove(new_node->content, content, content_size);
		}
		else
		{
			new_node->content_size = 0;
			new_node->content = NULL;
		}
		new_node->next = NULL;
	}
	return (new_node);
}
