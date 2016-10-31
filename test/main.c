/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 13:26:11 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/30 13:26:11 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include <stdio.h>

int	cmp(void *l, void *r)
{
	return ((*(int *)l) - (*(int *)r));
}

int main(void)
{
	int numbers[] = {10, 20, 1, -3, 42, 55, 91, 747, 2, 2142, -101, -3, 5, 42};

	for(size_t i = 0;i < sizeof(numbers) / sizeof(int);i++)
		printf("%d ", numbers[i]);
	printf("\n");

	printf("Sorting...\n");

	ft_heapsort(numbers, sizeof(int), sizeof(numbers) / sizeof(int), cmp);

	printf("Done.\n");
	for(size_t i = 0;i < sizeof(numbers) / sizeof(int);i++)
		printf("%d ", numbers[i]);
	printf("\n");
	for(size_t i = 0; i < sizeof(numbers) / sizeof(int); i++)
		printf("%d ", numbers[i]);
	printf("\n");
	return (0);
}
