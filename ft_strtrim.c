/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 15:38:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/25 15:38:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

static int	is_trimmable(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	char	*start;
	char	*end;

	start = (char *)s;
	end = ft_strchr(s, 0) - 1;
	while (is_trimmable(*start))
		++start;
	while (is_trimmable(*end) && end > start)
		--end;
	return (ft_strsub(start, 0, 1 + end - start));
}
