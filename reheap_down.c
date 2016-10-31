/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reheap_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:15:35 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/29 17:15:35 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

void	reheap_down(void *arr, size_t step, size_t n, int cmp(void *, void *))
{
	size_t	c;
	size_t	left;
	size_t	right;
	size_t	next;

	c = 0;
	next = 0;
	while (c < n)
	{
		left = 2 * c + 1;
		right = 2 * c + 2;
		if (left <= n && cmp(arr + c * step, arr + left * step) < 0)
			next = left;
		if (right <= n && cmp(arr + c * step, arr + right * step) < 0)
		{
			if (next == left && cmp(arr + left * step, arr + right * step) < 0)
				next = right;
			else if (next != left)
				next = right;
		}
		if (next != left && next != right)
			return ;
		ft_swap(arr + c * step, arr + next * step, step);
		c = next;
	}
}
