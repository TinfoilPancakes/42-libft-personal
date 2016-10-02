/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 17:50:57 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 17:50:57 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	t_byte	*m_ptr;
	t_byte	*v_ptr;

	m_ptr = (t_byte *)dst + n - 1;
	v_ptr = (t_byte *)src + n - 1;
	while (n)
	{
		*m_ptr = *v_ptr;
		--m_ptr;
		--v_ptr;
		--n;
	}
	return (dst);
}
