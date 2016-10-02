/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 08:28:36 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/23 08:28:36 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if ((t_byte)(*s1) - (t_byte)(*s2) != 0)
			return ((t_byte)(*s1) - (t_byte)(*s2));
		++s1;
		++s2;
	}
	return ((t_byte)(*s1) - (t_byte)(*s2));
}
