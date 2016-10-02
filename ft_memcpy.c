/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 16:34:31 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 16:34:31 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte	*m_ptr;
	t_byte	*v_ptr;

	m_ptr = (t_byte *)dst;
	v_ptr = (t_byte *)src;
	while (n)
	{
		*m_ptr = *v_ptr;
		++m_ptr;
		++v_ptr;
		--n;
	}
	return (dst);
}
