/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_generic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 09:02:08 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 18:08:00 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

int	ft_atoi_generic(const char *str, size_t base, const char *format)
{
	int		sign;
	int		val;

	sign = 1;
	val = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == format[0] || *str == format[1])
	{
		if (*str == format[0])
			sign = -1;
		++str;
	}
	while (ft_memchr(&format[2], *str, base) && *str)
	{
		val *= base;
		val += sign * ((char *)ft_memchr(&format[2], *str, base) - &format[2]);
		++str;
	}
	return (val);
}
