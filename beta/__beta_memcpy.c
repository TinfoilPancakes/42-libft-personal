/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __beta_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 11:52:52 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/19 11:52:52 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte	*m_ptr;
	t_byte	*v_ptr;
	size_t	*m_ptr_l;
	size_t	*v_ptr_l;

	m_ptr = (t_byte *)dst;
	v_ptr = (t_byte *)src;
	while (n % 8)
	{
		*m_ptr = *v_ptr;
		++m_ptr;
		++v_ptr;
		--n;
	}
	m_ptr_l = (size_t *)m_ptr;
	v_ptr_l = (size_t *)v_ptr;
	while (n)
	{
		*m_ptr_l = *v_ptr_l;
		++m_ptr_l;
		++v_ptr_l;
		n -= 8;
	}
	return (dst);
}
