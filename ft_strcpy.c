/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:55:31 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/22 11:55:31 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	source_length;

	source_length = ft_strlen(src);
	return (ft_memcpy(dst, src, source_length + 1));
}
