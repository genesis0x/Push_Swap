/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:31:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/16 23:15:14 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_push_swap(t_stacks *stack)
{
	int	*arr;
	int	i;

	if (is_sorted(stack->a, stack->size_a) == 2)
		exit(1);
	arr = (int *)malloc(sizeof(int) * stack->size_a);
	i = -1;
	while (++i < stack->size_a)
		arr[i] = stack->a[i];
	bubbleSort(stack, arr);
	solve(stack);
}
