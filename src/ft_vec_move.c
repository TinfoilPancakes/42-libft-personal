/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 09:54:30 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 09:54:30 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	ft_vec_move(t_vector *v)
{
	t_vector	new_vec;

	new_vec.step = v->step;
	new_vec.size = v->size;
	new_vec.count = v->count;
	new_vec.data = v->data;
	new_vec.end = v->end;
	v->size = T_VECTOR_INIT_SIZE;
	v->count = 0;
	v->data = ft_memalloc(v->step * v->size);
	v->end = v->data;
	return (new_vec);
}
