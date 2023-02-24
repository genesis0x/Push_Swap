/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:44:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 22:52:27 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


static int get_index(t_stacks *stack, int n)
{
    for (int i = 0; i < stack->size_b; i++)
    {
        if (stack->b[i] == n)
            return (i);
    }
    return (-1);
}

void    solve(t_stacks *stack)
{
    int range = 19;
    int i = 0;
    stack->b = (int *)malloc(sizeof(int) * stack->size_a);
	if (!stack->b)
	{
		free(stack->a);
		exit(1);
	}
	stack->size_b = 0;
    while (stack->size_a)
    {
        if (stack->a[0] < i)
        {
            pb(stack);
            rb(stack);
            ++i;
        }
        else if (stack->a[0] < range + i)
        {
            pb(stack);
            ++i;
        }
        else
            ra(stack);
    }
    // printf("stack->size_b == [%d]\n", stack->size_b);
    while (stack->size_b)
    {
        if (get_index(stack, stack->size_b - 1) < stack->size_b / 2)
        {
           while (get_index(stack, stack->size_b - 1) != 0)
                rb(stack);
        }
        else
        {
             while (get_index(stack, stack->size_b - 1) != 0)
                rrb(stack);
        }
        pa(stack);
    }
}
