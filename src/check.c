/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:51:41 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 22:48:21 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	check_input(t_stacks *stack)
{
	for (int i = 0; i < stack->size_a; i++)
	{
		for (int j = i + 1; j < stack->size_a; j++)
		{
			if (stack->a[i] == stack->a[j])
			{
				free(stack->a);
				printf("ERROR\n");
				exit(1);
			}
		}
	}
}

int is_sorted(int *stack, int n) 
{
    bool isAscending = true, isDescending = true;
    for (int i = 1; i < n; i++) 
    {
        if (stack[i] < stack[i - 1]) 
            isAscending = false;
        if (stack[i] > stack[i - 1])
            isDescending = false;
    }
    if (isAscending)
	{
       // printf("Stack is sorted in ascending order.\n");
		return (0);
	}
    else if (isDescending)
	{
     //   printf("Stack is sorted in descending order.\n");
		return (0);
	}
    else
		return (1);
       //printf("Stack is not sorted.\n");
	return (1);
}
