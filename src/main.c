/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:31:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 19:55:31 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	start_push_swap(t_stacks *stack)
{
	int	*arr;

	if (!is_sorted(stack->a, stack->size_a))
	{
		printf("size a : %d\n", stack->size_a);
		printf("Stack is sorted\n");
		exit (1);
	}
	arr = (int *)malloc(sizeof(int) * stack->size_a);
	for (int i = 0; i < stack->size_a; i++)
		arr[i] = stack->a[i];
	insertionSort(stack, arr);
	solve(stack);
}
