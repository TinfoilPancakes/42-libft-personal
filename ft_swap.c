/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:08:46 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/29 17:08:46 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

/*
**	Ah the ol' 42 switch-a-roo...
*/

void	ft_swap(void *l, void *r, size_t step)
{
	register t_byte	tmp;
	register t_byte	*lptr;
	register t_byte	*rptr;

	lptr = (t_byte *)l;
	rptr = (t_byte *)r;
	while (step)
	{
		tmp = *lptr;
		*lptr = *rptr;
		*rptr = tmp;
		lptr++;
		rptr++;
		step--;
	}
}
