/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:22:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/13 23:51:47 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void ra(t_stacks *stack, t_size *size)
{	
	int tmp = stack->a[size->a - 1];
	for (int i = size->a - 1; i > 0; i--)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = tmp;
	printf("ra\n");
}

void rb(t_stacks *stack, t_size *size)
{	
	int tmp = stack->a[size->a - 1];
	for (int i = size->a - 1; i > 0; i--)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = tmp;
	printf("rb\n");
}

void	rr(t_stacks *stack, t_size *size)
{
	int tmp = stack->a[size->a - 1];
	for (int i = size->a - 1; i > 0; i--)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = tmp;
	
	tmp = stack->b[size->b - 1];
	for (int i = size->b - 1; i > 0; i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = tmp;
	printf("rr\n");
}

void rra(t_stacks *stack, t_size *size)
{
    int tmp;
    int i;
	
    i = size->a - 1;
    tmp = stack->a[i];
    while (i)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[i] = tmp;
    printf("rra\n");
}

void rrb(t_stacks *stack, t_size *size)
{
    int tmp;
	
    tmp = stack->b[size->b - 1];
    for (int i = size->b - 1; i > 0; i--)
        stack->b[i] = stack->b[i - 1];
    stack->b[0] = tmp;
    printf("rrb\n");
}

void rrr(t_stacks *stack, t_size *size)
{
    int tmp_a;
    int tmp_b;
    int i;
    tmp_a = stack->a[size->a - 1];
    tmp_b = stack->b[size->b - 1];

    for (i = size->a - 1; i >= 1; i--)
        stack->a[i] = stack->a[i - 1];
    stack->a[0] = tmp_a;

    for (i = size->b - 1; i >= 1; i--)
        stack->b[i] = stack->b[i - 1];
    stack->b[0] = tmp_b;
    printf("rrr\n");
}
