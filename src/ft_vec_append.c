/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:40:04 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 11:40:04 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	ft_vec_append(t_vector *v, const void *str, size_t elem_count)
{
	if (v->count + elem_count >= v->size)
		ft_vec_resize(v, v->count + elem_count + 1);
	v->count += elem_count;
	ft_memmove(v->end, str, elem_count);
	v->end += elem_count * v->step;
}
