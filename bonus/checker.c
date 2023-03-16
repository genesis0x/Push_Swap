/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:25:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 19:05:44 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void	checker(t_stacks *stack)
{
	char		*rule;

	while (1)
	{
		rule = get_next_line(0);
		ft_check_rules(rule, stack);
		//ft_puts(rule);
		/*if (strcmp(rule, "\n"))
		{
			printf("stack_size: %d\n", stack->size_b);
			for (int i = 0; i < stack->size_a; i++)
				printf("%d\n", stack->a[i]);
			if (is_sorted(stack->a, stack->size_a) == 2 && stack->size_b == 0)
				ft_puts("OK");
			else
				ft_puts("K0");
			free(stack->a);
			free(stack->b);
			//exit (1);
		}
		if (!ft_check_rules(rule, stack))
		{
			free(stack->a);
			free(stack->b);
			return ;
		}*/
	}
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
		stack.b = (int *)malloc(sizeof(int) * stack.size_a);
		if (!stack.b)
		{
			free(stack.a);
			exit (1);
		}
		stack.size_b = 0;
		checker(&stack);
	}
	return (0);
}
