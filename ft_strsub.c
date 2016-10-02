/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 15:16:52 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/25 15:16:52 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strsub(const char *s, unsigned int start, size_t n)
{
	char	*substr;

	substr = ft_strnew(n);
	if (substr)
		ft_memmove(substr, s + start, n);
	return (substr);
}
