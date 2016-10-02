/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:19:05 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/25 11:19:05 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapped_str;
	char			*iter;

	mapped_str = ft_strdup(s);
	if (mapped_str)
	{
		i = 0;
		iter = mapped_str;
		while (*iter)
		{
			*iter = f(i, *iter);
			++iter;
			++i;
		}
	}
	return (mapped_str);
}
