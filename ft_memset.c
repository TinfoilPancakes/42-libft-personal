/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:34:47 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 14:34:47 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_byte	*ptr;

	c = (t_byte)c;
	ptr = (t_byte *)b;
	while (len)
	{
		*ptr = c;
		++ptr;
		--len;
	}
	return (b);
}
