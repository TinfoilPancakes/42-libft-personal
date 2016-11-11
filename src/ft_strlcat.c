/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:59:17 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/22 21:59:17 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	char	*iter;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len < size)
	{
		iter = dst + dst_len;
		ft_bzero(iter, size - dst_len);
		ft_memcpy(iter, src, size - dst_len - 1);
		return (dst_len + src_len);
	}
	return (size + src_len);
}
