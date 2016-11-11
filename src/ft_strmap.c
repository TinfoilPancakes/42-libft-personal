/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 17:08:04 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/24 17:08:04 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*mapped_str;
	char	*iter;

	mapped_str = ft_strdup(s);
	if (mapped_str)
	{
		iter = mapped_str;
		while (*iter)
		{
			*iter = f(*iter);
			++iter;
		}
	}
	return (mapped_str);
}
