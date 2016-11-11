/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 11:02:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/03 11:02:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	ft_vec_append(t_vector *v, void *data)
{
	if (v->count >= v->size)
		ft_vec_resize(v, v->size * 2);
	ft_memmove(v->data + v->count * v->step, data, v->step);
	(v->count)++;
}
