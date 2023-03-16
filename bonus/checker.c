/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:25:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/16 16:40:01 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_stack_b(t_stacks *stack)
{
	stack->b = (int *)malloc(sizeof(int) * stack->size_a);
	if (!stack->b)
	{
		free(stack->a);
		exit(1);
	}
	stack->size_b = 0;
}

int	main(int ac, char **av)
{
	t_stacks	stack;
	char		*temp;
	int			i;

	temp = NULL;
	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			temp = ft_strjoin(temp, av[i]);
			temp = ft_strjoin(temp, " ");
			i++;
		}
		stack = init(av, temp, ft_stack_size(av));
		init_stack_b(&stack);
		read_rules(&stack);
		if (is_sorted(stack.a, stack.size_a) == 2 && stack.size_b == 0)
			ft_puts("OK");
		else
			ft_puts("KO");
		free(stack.a);
		free(stack.b);
	}
	return (0);
}
