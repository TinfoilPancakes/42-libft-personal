/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:59:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/29 16:59:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHMS_H
# define FT_ALGORITHMS_H

# include "ft_memory.h"

void	ft_swap(void *l, void *r, size_t step);

void	ft_heapsort(void *arr, size_t step, size_t n, int cmp(void *, void *));

void	reheap_down(void *arr, size_t step, size_t n, int cmp(void *, void *));

void	reheap_up(void *arr, size_t step, size_t n, int cmp(void *, void *));

#endif
