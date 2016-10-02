/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:47:48 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/24 16:47:48 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_memalloc(size_t size)
{
	void	*new_memory;

	new_memory = malloc(size);
	if (new_memory)
		ft_bzero(new_memory, size);
	return (new_memory);
}
