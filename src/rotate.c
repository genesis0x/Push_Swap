/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:22:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 23:15:21 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_stacks *stack)
{
	int	temp;
	int	i;

	if (stack->size_a > 1)
	{
		temp = stack->a[0];
		i = 0;
		while (++i < stack->size_a)
			stack->a[i - 1] = stack->a[i];
		stack->a[stack->size_a - 1] = temp;
		printf("ra\n");
	}
}

void	rb(t_stacks *stack)
{
	int	temp;
	int	i;

	if (stack->size_b > 1)
	{
		temp = stack->b[0];
		i = 0;
		while (++i < stack->size_b)
			stack->b[i - 1] = stack->b[i];
		stack->b[stack->size_b - 1] = temp;
		printf("rb\n");
	}
}


void	rr(t_stacks *stack)
{
	int	tmp;

	tmp = stack->a[stack->size_a - 1];
	for (int i = stack->size_a - 1; i > 0; i--)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = tmp;
	tmp = stack->b[stack->size_b - 1];
	for (int i = stack->size_b - 1; i > 0; i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = tmp;
	printf("rr\n");
}

void	rra(t_stacks *stack)
{
	int	tmp;
	int	i;

	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	printf("rra\n");
}

void	rrb(t_stacks *stack)
{
	int	temp;
	int	i;

	if (stack->size_b > 1)
	{
		temp = stack->b[stack->size_b - 1];
		i = stack->size_b;
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = temp;
		printf("rrb\n");
	}
}
void	rrr(t_stacks *stack)
{
	int	tmp_a;
	int	tmp_b;
	int	i;

	tmp_a = stack->a[stack->size_a - 1];
	tmp_b = stack->b[stack->size_b - 1];
	for (i = stack->size_a - 1; i >= 1; i--)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = tmp_a;
	for (i = stack->size_b - 1; i >= 1; i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = tmp_b;
	printf("rrr\n");
}
