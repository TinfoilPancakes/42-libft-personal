/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 08:36:13 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/23 08:36:13 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n)
	{
		if ((t_byte)(*s1) - (t_byte)(*s2) != 0)
			return ((t_byte)(*s1) - (t_byte)(*s2));
		++s1;
		++s2;
		--n;
	}
	if (n)
		return ((t_byte)(*s1) - (t_byte)(*s2));
	return (0);
}
