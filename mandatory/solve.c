/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:44:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 18:45:36 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(int *stack, int size, int n)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (stack[i] == n)
			return (i);
	}
	return (-1);
}

static void	solve_a(t_stacks *stack, int range, int i)
{
	while (stack->size_a)
	{
		if (stack->a[0] < i)
		{
			pb(stack, true);
			rb(stack, true);
			++i;
		}
		else if (stack->a[0] < range + i)
		{
			pb(stack, true);
			++i;
		}
		else
			ra(stack, true);
	}
}

static void	solve_b(t_stacks *stack)
{
	while (stack->size_b)
	{
		if (get_index(stack->b, stack->size_b, stack->size_b
				- 1) < stack->size_b / 2)
			while (get_index(stack->b, stack->size_b, stack->size_b - 1))
				rb(stack, true);
		else
			while (get_index(stack->b, stack->size_b, stack->size_b - 1))
				rrb(stack, true);
		pa(stack, true);
	}
}

void	range_sort(t_stacks *stack, int range, int i)
{
	solve_a(stack, range, i);
	solve_b(stack);
}

void	solve(t_stacks *stack)
{
	stack->b = (int *)malloc(sizeof(int) * stack->size_a);
	if (!stack->b)
	{
		free(stack->a);
		exit(1);
	}
	stack->size_b = 0;
	if (stack->size_a <= 15)
		sort_small(stack);
	else if (stack->size_a <= 100)
		range_sort(stack, 19, 0);
	else if (stack->size_a <= 500)
		range_sort(stack, 35, 0);
	free(stack->a);
	free(stack->b);
}
