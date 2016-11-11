/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:10:32 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 17:34:50 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte	*iter;

	iter = (t_byte *)s;
	c = (t_byte)c;
	while (n)
	{
		if (*iter == c)
			return (iter);
		++iter;
		--n;
	}
	return (NULL);
}
