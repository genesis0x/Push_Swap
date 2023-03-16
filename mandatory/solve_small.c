/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:58:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 21:21:25 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stacks *stack)
{
	int	i;

	i = 0;
	while (stack->size_a > 3)
	{
		if (get_index(stack->a, stack->size_a, i) <= stack->size_a / 2)
			while (get_index(stack->a, stack->size_a, i) != 0)
				ra(stack, true);
		else
			while (get_index(stack->a, stack->size_a, i) != 0)
				rra(stack, true);
		pb(stack, true); 
		++i;
	}
	if (get_index(stack->a, stack->size_a, (stack->size_a - 1)
			+ stack->size_b) == 1)
		rra(stack, true);
	if (get_index(stack->a, stack->size_a, (stack->size_a - 1)
			+ stack->size_b) == 0)
		ra(stack, true);
	if (get_index(stack->a, stack->size_a, stack->size_b) == 1)
		sa(stack, true);
	while (stack->size_b)
		pa(stack, true);
}
