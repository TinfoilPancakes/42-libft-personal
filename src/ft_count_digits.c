/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 18:02:58 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 18:08:03 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

size_t	ft_count_digits(long n, size_t base)
{
	size_t	digit_count;

	digit_count = 0;
	if (n < 0)
		++digit_count;
	while (n)
	{
		++digit_count;
		n /= (long)base;
	}
	if (!digit_count)
		return (1);
	return (digit_count);
}
