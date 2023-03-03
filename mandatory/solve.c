/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:44:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/03 20:16:15 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_index(t_stacks *stack, int n)
{
	int	i;

	i = 0;
	while (i < stack->size_b)
	{
		if (stack->b[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

static void	solve_a(t_stacks *stack, int range, int i)
{
	while (stack->size_a)
	{
		if (stack->a[0] < i)
		{
			pb(stack, 1);
			rb(stack, 1);
			++i;
		}
		else if (stack->a[0] < range + i)
		{
			pb(stack, 1);
			++i;
		}
		else
			ra(stack, 1);
	}
}

static void	solve_b(t_stacks *stack)
{
	while (stack->size_b)
	{
		if (get_index(stack, stack->size_b - 1) < stack->size_b / 2)
			while (get_index(stack, stack->size_b - 1))
				rb(stack, 1);
		else
			while (get_index(stack, stack->size_b - 1))
				rrb(stack, 1);
		pa(stack, 1);
	}
}

void	range_sort(t_stacks *stack, int range, int i)
{
	stack->b = (int *)malloc(sizeof(int) * stack->size_a);
	if (!stack->b)
	{
		free(stack->a);
		exit(1);
	}
	solve_a(stack, range, i);
	solve_b(stack);
}

void	solve(t_stacks *stack)
{
	if (stack->size_a == 100)
		range_sort(stack, 15, 0);
	if (stack->size_a == 500)
		range_sort(stack, 35, 0);
}
