/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_generic.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 18:13:24 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 18:13:24 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_output.h"
#include "ft_memory.h"
#include "ft_math.h"

void	ft_putnbr_generic(long n, size_t b, int fd, const char *fmt)
{
	size_t	digit_count;
	char	num_string[24];
	char	*iter;

	digit_count = ft_count_digits(n, b);
	ft_bzero(num_string, 24);
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
	ft_putstr_fd(num_string, fd);
}
