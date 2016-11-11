/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:43:26 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 11:43:26 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	ft_vec_join(t_vector *v, t_vector *u)
{
	t_vector	new_vec;

	new_vec = ft_vec_newn(v->step, v->count + u->count + 1);
	new_vec.count = v->count + u->count;
	ft_memcpy(new_vec.end, v->data, v->count * v->step);
	new_vec.end = new_vec.end + v->count * v->step;
	ft_memcpy(new_vec.end, u->data, u->count * u->step);
	new_vec.end = new_vec.end + u->count * v->step;
	return (new_vec);
}
