/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 10:05:01 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 10:05:01 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	ft_vec_resize(t_vector *v, size_t new_size)
{
	void	*new_data;

	new_data = ft_memalloc(new_size * v->step);
	if (new_size > v->size)
		ft_memcpy(new_data, v->data, v->size * v->step);
	else
	{
		ft_memcpy(new_data, v->data, new_size * v->step);
		v->count = new_size;
	}
	ft_memdel(&v->data);
	v->size = new_size;
	v->data = new_data;
	v->end = new_data + v->count * v->step;
}
