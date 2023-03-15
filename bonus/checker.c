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

void	ft_checker(t_stacks *stack)
{
	char		*opt;

	while (1)
	{
		opt = get_next_line(0);
		if (ft_strcmp(opt, "\n"))
		{
			if (ft_check_sorted(stack->a, stack->size_a, ASCENDING)
				&& stack->size_b == 0)
				ft_puts("OK");
			else
				ft_puts("K0");
			free(stack->a);
			free(stack->b);
			exit (1);
		}
		if (!ft_check_opt(opt, stack))
		{
			free(stack->a);
			free(stack->b);
			return ;
		}
		ft_opt(stack, opt);
	}
}

int	*ft_check_errors(char **av)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = ft_ps_strlen(av);
	a = malloc(size * sizeof(int));
	while (++i < size)
		a[i] = ft_ps_atoi(av[i], a);
	ft_check_repeat(a, size);
	return (a);
}

int	main(int ac, char **av)
{
	t_stacks	stack;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		stack.a = ft_check_errors(av);
		stack.size_a = ft_ps_strlen(av);
		ft_checker_instructions(&stack);
		stack.b = malloc(stack.size_a * sizeof(int));
		if (!stack.b)
		{
			free(stack.a);
			return (0);
		}
		stack.size_b = 0;
		ft_checker(&stack);
	}
	return (0);
}
