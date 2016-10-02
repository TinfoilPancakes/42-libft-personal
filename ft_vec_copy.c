/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 09:23:07 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 09:23:07 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	*ft_vec_copy(t_vector *v)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = v->step;
	new_vec->size = v->size;
	new_vec->count = v->count;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	ft_memcpy(new_vec->data, v->data, new_vec->step * new_vec->count);
	return (new_vec);
}
