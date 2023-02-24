/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:21:50 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 23:14:40 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_stacks *stack)
{
	int	temp;
	int	i;

	if (stack->size_b)
	{
		temp = stack->b[0];
		i = 0;
		while (++i < stack->size_b)
			stack->b[i - 1] = stack->b[i];
		--stack->size_b;
		i = stack->size_a + 1 + (stack->size_a == 0);
		while (--i)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = temp;
		++stack->a;
		printf("pa\n");
	}
}

void	pb(t_stacks *stack)
{
	int	temp;
	int	i;

	if (stack->size_a)
	{
		temp = stack->a[0];
		i = 0;
		while (++i < stack->size_a)
			stack->a[i - 1] = stack->a[i];
		--stack->size_a;
		i = stack->size_b + 1 + (stack->size_b == 0);
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = temp;
		++stack->size_b;
		printf("pb\n");
	}
}
