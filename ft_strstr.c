/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 08:16:42 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/23 08:16:42 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
**	Now calls implementation of KMP String Searching Algorithm: O(n + m) time,
**	and O(m) space complexity.
**
**	WARNING:
**	This implementation uses dynamic heap allocation to generate tables. Be
**	careful if this is not an option.
*/

char	*ft_strstr(const char *big, const char *little)
{
	return (kmp_strstr(big, little));
}

/*
**	char	*ft_strstr(const char *big, const char *little)
**	{
**		char	*big_ptr;
**		char	*little_ptr;
**
**		big_ptr = (char *)big;
**		little_ptr = (char *)little;
**		while (*big_ptr)
**		{
**			if (*little_ptr == 0)
**				return (big_ptr - ft_strlen(little));
**			if (*little_ptr == *big_ptr)
**				++little_ptr;
**			else
**			{
**				big_ptr -= little_ptr - (char *)little;
**				little_ptr = (char *)little;
**			}
**			++big_ptr;
**		}
**		if (*little_ptr == 0)
**			return (big_ptr - ft_strlen(little));
**		return (NULL);
**	}
*/
