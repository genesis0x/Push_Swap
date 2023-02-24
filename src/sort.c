/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:10:20 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 16:36:23 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
 
void insertionSort(t_stacks *stack, int *arr)
{
    int i, key, j;
    for (i = 1; i < stack->size_a; i++) 
	{
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key)
		{
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
	for (int i = 0; i < stack->size_a; i++)
		ft_rank(stack, arr[i], i);
}

void	ft_rank(t_stacks *stack, int value, int rank)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] == value)
			stack->a[i] = rank;
		++i;
	}
}