/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:32:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 11:32:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	ft_vec_push(t_vector *v, void *elem)
{
	if (v->count >= v->size)
		ft_vec_resize(v, v->size * 2);
	ft_memmove(v->end, elem, v->step);
	v->end += v->step;
	v->count++;
}
