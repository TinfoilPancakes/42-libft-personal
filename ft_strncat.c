/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:53:07 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 07:20:40 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s2_len;
	char	*iter;

	iter = s1 + ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len < n)
	{
		*(iter + s2_len) = 0;
		ft_memcpy(iter, s2, s2_len);
	}
	else
	{
		*(iter + n) = 0;
		ft_memcpy(iter, s2, n);
	}
	return (s1);
}
