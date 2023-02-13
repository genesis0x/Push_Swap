/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:21:50 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/13 23:49:56 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void pa(t_stacks *stack, t_size *size)
{
	int i;

	size->a++;
	stack->a[0] = stack->b[0];
	i = -1;
	size->b--;
	while (++i < size->b)
		stack->b[i] = stack->b[i + 1];
	printf("pa\n");
}

void	pb(t_stacks *stack, t_size *size)
{
	stack->b[size->b++] = stack->a[0];
	size->a--;
	for (int i = 0; i < size->a; i++)
		stack->a[i] = stack->a[i + 1];
	printf("pb\n");
}
