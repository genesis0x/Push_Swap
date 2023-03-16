/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:10:20 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/16 23:17:24 by hahadiou         ###   ########.fr       */
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

void	bubblesort(t_stacks *stack, int *arr)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	j = -1;
	while (++i < stack->size_a)
	{
		while (++j < stack->size_a - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	i = -1;
	while (++i < stack->size_a)
		add_index(stack, arr[i], i);
	free(arr);
}
