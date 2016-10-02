/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 12:43:05 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/27 12:43:05 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <string.h>
# include "ft_typedefs.h"

struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
};

typedef	struct s_list	t_list;

t_list	*ft_lstnew(const void *content, size_t content_size);

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void	ft_lstadd(t_list **alst, t_list *n);

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
