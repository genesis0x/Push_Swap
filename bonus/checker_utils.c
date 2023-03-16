/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:17:46 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 18:31:19 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_check_rules(char *rule, t_stacks *stack)
{
	if (strcmp(rule, "sa\n") || strcmp(rule, "sb\n")
		|| strcmp(rule, "ss\n") || strcmp(rule, "ra\n")
		|| strcmp(rule, "rb\n") || strcmp(rule, "rra\n")
		|| strcmp(rule, "rrb\n") || strcmp(rule, "rrr\n")
		|| strcmp(rule, "pa\n") || strcmp(rule, "pb\n")
		|| strcmp(rule, "rr\n"))
		return (1);
	else if (!rule && is_sorted(stack->a, stack->size_a) == 2)
	{		
		ft_puts("OK");
		return (0);
	}
	else
	{
		ft_puts("Error");
		return (0);
	}
}

void	ft_rule(t_stacks *stack, char *rule)
{
	if (strcmp(rule, "sa\n"))
		sa(stack, false);
	else if (strcmp(rule, "sb\n"))
		sb(stack, false);
	else if (strcmp(rule, "ss\n"))
		ss(stack, false);
	else if (strcmp(rule, "ra\n"))
		ra(stack, false);
	else if (strcmp(rule, "rb\n"))
		rb(stack, false);
	else if (strcmp(rule, "rr\n"))
		rr(stack, false);
	else if (strcmp(rule, "rra\n"))
		rra(stack, false);
	else if (strcmp(rule, "rrb\n"))
		rrb(stack, false);
	else if (strcmp(rule, "rrr\n"))
		rrr(stack, false);
	else if (strcmp(rule, "pa\n"))
		pa(stack, false);
	else if (strcmp(rule, "pb\n"))
		pb(stack, false);
}