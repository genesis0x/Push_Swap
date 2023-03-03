/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:21:50 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/03 20:03:45 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b)
	{
		tmp = stack->b[0];
		i = 0;
		while (++i < stack->size_b)
			stack->b[i - 1] = stack->b[i];
		--stack->size_b;
		i = stack->size_a + 1 + (stack->size_a == 0);
		while (--i)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = tmp;
		++stack->size_a;
		if (print)
			ft_puts("pa");
	}
}

void	pb(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a)
	{
		tmp = stack->a[0];
		i = 0;
		while (++i < stack->size_a)
			stack->a[i - 1] = stack->a[i];
		--stack->size_a;
		i = stack->size_b + 1 + (stack->size_b == 0);
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = tmp;
		++stack->size_b;
		if (print)
			ft_puts("pb");
	}
}

void	rrr(t_stacks *stack, int print)
{
	if (stack->size_a > 1 && stack->size_b > 1)
	{
		rra(stack, 0);
		rrb(stack, 0);
		if (print)
			ft_puts("rrr");
	}
}
