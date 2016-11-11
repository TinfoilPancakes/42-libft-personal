/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 09:17:28 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 09:17:28 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	*ft_vec_new(size_t step)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = step;
	new_vec->size = T_VECTOR_INIT_SIZE;
	new_vec->count = 0;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	return (new_vec);
}
