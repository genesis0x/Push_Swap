/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:51:41 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/12 22:29:05 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void check_input(t_stacks *stack, t_size *size) 
{
    for (int i = 0; i < size->a; i++)
	{
        for (int j = i + 1; j < size->a; j++) 
		{
            if (stack->a[i] == stack->a[j]) 
			{
                free(stack->a);
				printf("Double Found\n");
                exit(1);
            }
        }
    }
}

int is_sorted(int *stack, int size, int order)
{
    int i = 1;
    int ascending = (order == 0);  // Convert order to a boolean value

    while (i < size) 
    {
        if (ascending && stack[i - 1] > stack[i]) 
            return (0);
        if (!ascending && stack[i - 1] < stack[i]) 
            return (0);
        i++;
    }
    return (1);
}
