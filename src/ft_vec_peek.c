/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_peek.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:37:29 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 11:37:29 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

int	ft_vec_peek(t_vector *v, void *store)
{
	if (v->end == v->data)
		return (0);
	ft_memmove(store, v->end - v->step, v->step);
	return (1);
}
