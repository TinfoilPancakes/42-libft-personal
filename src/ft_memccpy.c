/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 17:14:16 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 17:14:16 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte	*m_ptr;
	t_byte	*v_ptr;

	m_ptr = (t_byte *)dst;
	v_ptr = (t_byte *)src;
	c = (t_byte)c;
	while (n)
	{
		*m_ptr = *v_ptr;
		++m_ptr;
		if (*v_ptr == c)
			return (m_ptr);
		++v_ptr;
		--n;
	}
	return (NULL);
}
