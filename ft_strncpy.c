/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:56:29 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/26 13:52:11 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < len)
	{
		ft_bzero(dst + src_len, len - src_len);
		ft_memcpy(dst, src, src_len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
