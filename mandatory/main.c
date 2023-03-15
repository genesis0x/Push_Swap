/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:31:08 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 23:09:50 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_push_swap(t_stacks *stack)
{
	int	*arr;
	int	i;
	int	check;

	check = is_sorted(stack->a, stack->size_a);
	if (check == 2 || check == 3)
		exit(1);
	arr = (int *)malloc(sizeof(int) * stack->size_a);
	i = -1;
	while (++i < stack->size_a)
		arr[i] = stack->a[i];
	insertion_sort(stack, arr);
	solve(stack);
}
