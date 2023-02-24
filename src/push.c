/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:21:50 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 23:20:38 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


void	pa(t_stacks *stack)
{
	int	i;

	stack->size_a++;
	stack->a[0] = stack->b[0];
	i = -1;
	stack->size_b--;
	while (++i < stack->size_b)
		stack->b[i] = stack->b[i + 1];
	printf("pa\n");
}

void	pb(t_stacks *stack)
{
	int	i;

	stack->size_b++;
	stack->b[0] = stack->a[0];
	i = -1;
	stack->size_a--;
	while (++i < stack->size_a)
		stack->a[i] = stack->a[i + 1];
	printf("pb\n");
}
