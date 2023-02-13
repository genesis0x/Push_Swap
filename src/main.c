/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:31:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/13 23:55:48 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int    start_push_swap(t_stacks *stack, t_size *size)
{
    if (is_sorted(stack->a, size->a, 0))
        return (0);
    if (size->a == 2)
        sa(stack);
    return (0);
}