/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:08:12 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/22 20:19:52 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	length;
	char	*iter;

	iter = ft_strlen(s1) + s1;
	length = ft_strlen(s2) + 1;
	ft_memcpy(iter, s2, length);
	iter += length - 1;
	*iter = 0;
	return (s1);
}
