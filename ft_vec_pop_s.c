/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 11:51:43 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/03 11:51:43 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	ft_vec_pop_s(t_vector *v, void *store)
{
	ft_memmove(store, v->data + (v->count - 1) * v->step, v->step);
	ft_bzero(v->data + (v->count - 1) * v->step, v->step);
	(v->count)--;
}
