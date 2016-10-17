/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kmp_generate_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 12:13:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/17 12:13:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

int	*kmp_generate_table(const char *pattern)
{
	int		*table;
	char	*prefix_iter;
	char	*pattern_iter;

	table = (int *)ft_memalloc(sizeof(int) * (ft_strlen(pattern) + 1));
	if (!table)
		return (NULL);
	prefix_iter = (char *)pattern;
	pattern_iter = prefix_iter + sizeof(char);
	while (*pattern_iter)
	{
		if (*prefix_iter != *pattern_iter)
		{
			prefix_iter = (char *)pattern;
			table[pattern_iter - pattern] = 0;
		}
		if (*prefix_iter == *pattern_iter)
		{
			table[pattern_iter - pattern] = prefix_iter - pattern + 1;
			prefix_iter++;
		}
		pattern_iter++;
	}
	table[pattern_iter - pattern] = -1;
	return (table);
}
