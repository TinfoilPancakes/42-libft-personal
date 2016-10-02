/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:44:21 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/21 18:44:21 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src && dst <= src + n)
		return (ft_memrcpy(dst, src, n));
	return (ft_memcpy(dst, src, n));
}
