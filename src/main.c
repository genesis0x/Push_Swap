/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:31:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/12 22:50:51 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// int	ft_sort(t_stacks *stack, int size)
// {
// 	if (ft_check_sorted(stack->a, stack->size_a, ASCENDING) == 0)
// 	{
// 		if (size == 2)
// 			ft_sa(stack, OPT);
// 		else if (size == 3)
// 			ft_sort_three_a(stack);
// 		else
// 			ft_quicksort_a(stack, size, 0);
// 	}
// 	return (0);
// }

void ft_sort_three_a(int *stack)
{
    int a0 = s->a[0];
    int a1 = s->a[1];
    int a2 = s->a[2];

    if (a0 > a1 && a0 < a2 && a1 < a2)
        ft_sa(s, OPT);
    else if (a0 > a1 && a0 > a2 && a1 > a2)
    {
        ft_sa(s, OPT);
        ft_rra(s, OPT);
    }
    else if (a0 > a1 && a0 > a2 && a1 < a2)
        ft_ra(s, OPT);
    else if (a0 < a1 && a0 < a2 && a1 > a2)
    {
        ft_sa(s, OPT);
        ft_ra(s, OPT);
    }
    else if (a0 < a1 && a0 > a2 && a1 > a2)
        ft_rra(s, OPT);
}

int    start_push_swap(int *stack , int size)
{
    if (is_sorted(stack, size, 0))
        return (0);
    if (size == 2)
        sa(stack);
    else if (size == 3)
        ft_sort_three_a(stack);
    return (0);
}