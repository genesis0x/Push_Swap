/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:10:20 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/03 19:17:20 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_index(t_stacks *stack, int value, int rank)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] == value)
			stack->a[i] = rank;
		++i;
	}
}

void	insertion_sort(t_stacks *stack, int *arr)
{
	int	i;
	int	key;
	int	j;

	i = 0;
	while (++i < stack->size_a)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	i = -1;
	while (++i < stack->size_a)
		add_index(stack, arr[i], i);
}
