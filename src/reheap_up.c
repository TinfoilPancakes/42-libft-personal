/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reheap_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:34:03 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/29 17:34:03 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

void	reheap_up(void *arr, size_t step, size_t n, int cmp(void *, void *))
{
	size_t parent;

	while (n)
	{
		parent = (n - 1) / 2;
		if (cmp(arr + parent * step, arr + n * step) < 0)
		{
			ft_swap(arr + parent * step, arr + n * step, step);
			n = parent;
		}
		else
			return ;
	}
}
