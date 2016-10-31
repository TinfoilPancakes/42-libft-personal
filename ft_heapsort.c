/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heapsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:39:13 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/29 17:39:13 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include "ft_output.h"

void	ft_heapsort(void *arr, size_t step, size_t n, int cmp(void *, void *))
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		reheap_up(arr, step, i, cmp);
		i++;
	}
	i--;
	while (i)
	{
		ft_swap(arr, arr + i * step, step);
		i--;
		reheap_down(arr, step, i, cmp);
	}
}
