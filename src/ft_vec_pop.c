/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 11:42:05 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/03 11:42:05 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

/*
** This function should fail if the vector is empty.
*/

void	*ft_vec_pop(t_vector *v)
{
	if (v->end == v->data)
		return (NULL);
	v->count--;
	v->end -= v->step;
	return (v->end);
}
