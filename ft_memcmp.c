/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:53:10 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/22 10:53:10 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte	*s1_ptr;
	t_byte	*s2_ptr;

	s1_ptr = (t_byte *)s1;
	s2_ptr = (t_byte *)s2;
	while (n)
	{
		if (*s1_ptr - *s2_ptr)
			return (*s1_ptr - *s2_ptr);
		++s1_ptr;
		++s2_ptr;
		--n;
	}
	return (0);
}
