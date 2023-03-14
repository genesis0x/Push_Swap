/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:58:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 23:35:46 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_sa.h"

static    void    sort5_2(t_stacks *stack int min)
{
    if (stack->a[1] == min)
    {
        rra(stack);
        rra(stack);
        pb(stack);
    }
    if (stack->a[0] == min)
    {
        rra(stack);
        pb(stack);
    }
}

void    sort5(t_stacks *stack)
{
    int    i ;
    int    min;

    i = -1;
    while (++i < 2)
    {
        min = is_get_min(a);
        if (stack->a[a->top] == min)
            pb(a, b, "pb\n");
        if (stack->a[a->top - 1] == min)
        {
            sa(a, "sa\n");
            pb(a, b, "pb\n");
        }
        if (stack->a[2] == min)
        {
            ra(a, "ra\n");
            sa(a, "sa\n");
            pb(a, b, "pb\n");
        }
        sort5_2(a, b, min);
    }
    sort3(a);
    pa(b, a, "pa\n");
    pa(b, a, "pa\n");
}

void    sort3(t_stacks *stack)
{
    int    *arr;

    arr = stack->a;
    if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
        sa(stack, 1);
    else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
    {
        sa(stack, 1);
        rra(stack, 1);
    }
    else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
        ra(stack, 1);
    else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
    {
        sa(stack, 1);
        ra(stack, 1);
    }
    else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
        rra(stack, 1);
}
// 5 -> 12 || 3 -> 3
void    sort2(t_stacks *stack)
{
    if (stack->a[1] > stack->a[0])
        sa(stack, 1);
}