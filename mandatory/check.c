/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:51:41 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/07 03:50:30 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(t_stacks *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack->size_a)
	{
		j = i;
		while (++j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
			{
				free(stack->a);
				ft_puts("ERROR");
				exit(1);
			}
		}
	}
}

int	is_sorted(int *stack, int n)
{
	bool	is_ascending;
	bool	is_descending;
	int		i;

	is_ascending = true;
	is_descending = true;
	i = 0;
	while (++i < n)
	{
		if (stack[i] < stack[i - 1])
			is_ascending = false;
		if (stack[i] > stack[i - 1])
			is_descending = false;
	}
	if (is_ascending)
		return (0);
	else if (is_descending)
		return (0);
	else
		return (1);
	return (-1);
}
