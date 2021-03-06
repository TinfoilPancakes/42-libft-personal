/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kmp_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 10:14:04 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/17 10:14:04 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*kmp_strstr(const char *string, const char *pattern)
{
	int		*search_table;
	char	*str_iter;
	char	*patt_iter;

	str_iter = (char *)string;
	patt_iter = (char *)pattern;
	search_table = kmp_generate_table(pattern);
	if (!search_table)
		return (NULL);
	while (*patt_iter && *str_iter)
	{
		if (*str_iter != *patt_iter && patt_iter - pattern > 0)
			patt_iter = (char *)pattern + search_table[patt_iter - pattern - 1];
		if (*str_iter == *patt_iter)
			patt_iter++;
		str_iter++;
	}
	ft_memdel((void **)&search_table);
	if (*patt_iter)
		return (NULL);
	return (str_iter - (patt_iter - pattern));
}
