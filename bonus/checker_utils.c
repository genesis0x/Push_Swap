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
	if (ft_strcmp(rule, "sa\n") || ft_strcmp(rule, "sb\n")
		|| ft_strcmp(rule, "ss\n") || ft_strcmp(rule, "ra\n")
		|| ft_strcmp(rule, "rb\n") || ft_strcmp(rule, "rra\n")
		|| ft_strcmp(rule, "rrb\n") || ft_strcmp(rule, "rrr\n")
		|| ft_strcmp(rule, "pa\n") || ft_strcmp(rule, "pb\n")
		|| ft_strcmp(rule, "rr\n"))
		return (1);
	else if (!rule
		&& is_sorted(stack->a, stack->size_a) == 2)
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
	if (ft_strcmp(rule, "sa\n"))
		ft_sa(stack);
	else if (ft_strcmp(rule, "sb\n"))
		ft_sb(stack);
	else if (ft_strcmp(rule, "ss\n"))
		ft_ss(stack);
	else if (ft_strcmp(rule, "ra\n"))
		ft_ra(stack);
	else if (ft_strcmp(rule, "rb\n"))
		ft_rb(stack);
	else if (ft_strcmp(rule, "rr\n"))
		ft_rr(stack);
	else if (ft_strcmp(rule, "rra\n"))
		ft_rra(stack);
	else if (ft_strcmp(rule, "rrb\n"))
		ft_rrb(stack);
	else if (ft_strcmp(rule, "rrr\n"))
		ft_rrr(stack);
	else if (ft_strcmp(rule, "pa\n"))
		ft_pa(stack);
	else if (ft_strcmp(rule, "pb\n"))
		ft_pb(stack);
	print_stacks(stack);
}