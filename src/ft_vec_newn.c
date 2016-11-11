/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_newn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 10:32:48 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 11:22:20 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	ft_vec_newn(size_t step, size_t init_size)
{
	t_vector	new_vec;

	new_vec.step = step;
	new_vec.size = init_size;
	new_vec.count = 0;
	new_vec.data = ft_memalloc(new_vec.size * new_vec.step);
	new_vec.end = new_vec.data;
	return (new_vec);
}
