/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:22:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 21:27:28 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *stack, bool print)
{
	int	tmp;
	int	i;

	if (stack->size_a > 1)
	{
		tmp = stack->a[0];
		i = 0;
		while (++i < stack->size_a)
			stack->a[i - 1] = stack->a[i];
		stack->a[stack->size_a - 1] = tmp;
		if (print)
			ft_puts("ra");
	}
}

void	rb(t_stacks *stack, bool print)
{
	int	tmp;
	int	i;

	if (stack->size_b > 1)
	{
		tmp = stack->b[0];
		i = 0;
		while (++i < stack->size_b)
			stack->b[i - 1] = stack->b[i];
		stack->b[stack->size_b - 1] = tmp;
		if (print)
			ft_puts("rb");
	}
}

void	rr(t_stacks *stack, bool print)
{
	if (stack->size_a > 1 && stack->size_b > 1)
	{
		ra(stack, 0);
		rb(stack, 0);
		if (print)
			ft_puts("rr");
	}
}

void	rra(t_stacks *stack, bool print)
{
	int	tmp;
	int	i;

	if (stack->size_a > 1)
	{
		tmp = stack->a[stack->size_a - 1];
		i = stack->size_a;
		while (--i)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = tmp;
		if (print)
			ft_puts("rra");
	}
}

void	rrb(t_stacks *stack, bool print)
{
	int	tmp;
	int	i;

	if (stack->size_b > 1)
	{
		tmp = stack->b[stack->size_b - 1];
		i = stack->size_b;
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = tmp;
		if (print)
			ft_puts("rrb");
	}
}
