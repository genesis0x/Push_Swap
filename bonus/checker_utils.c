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

void	read_rules(t_stacks *stack)
{
    char	rules[RULES_SIZE];
    int		i;
    int		prev_i;

    i = 0;
    while (i < RULES_SIZE)
    {
        prev_i = i;
        i += read(0, rules + i, 1);
        if (prev_i == i)
            break ;
        if (rules[prev_i] == '\n')
        {
            rules[prev_i] = 0;
            if (!exec_rule(stack, rules))
			{
				ft_puts("Error");
				exit (1);
			}
            i = 0;
        }
    }
    if (i == RULES_SIZE)
		exit (1);
}

int	exec_rule(t_stacks *stack, char *rule)
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
	else
		return (0);
	return (1);
}