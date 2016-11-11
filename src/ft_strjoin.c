/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 15:30:58 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/25 15:30:58 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = ft_strnew(s1_len + s2_len);
	if (joined_str)
	{
		ft_memmove(joined_str, s1, s1_len);
		ft_memmove(joined_str + s1_len, s2, s2_len);
	}
	return (joined_str);
}
