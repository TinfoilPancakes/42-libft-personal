/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_generic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 09:10:42 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/26 09:27:56 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"
#include "ft_math.h"

char	*ft_itoa_generic(long n, size_t b, size_t md, const char *fmt)
{
	size_t	digit_count;
	char	*num_string;
	char	*iter;

	digit_count = ft_count_digits(n, b);
	if (md > digit_count)
		digit_count = md;
	num_string = ft_strnew(digit_count);
	if (num_string)
	{
		ft_memset(num_string, fmt[1], digit_count);
		iter = num_string + digit_count - 1;
		if (n < 0)
			*num_string = fmt[0];
		while (n)
		{
			*iter = fmt[1 + (ft_abs(n) % b)];
			--iter;
			n /= (long)b;
		}
	}
	return (num_string);
}
