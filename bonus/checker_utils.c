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

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*b;

	i = 0;
	p = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((p[i] || b[i]) && (i < n))
	{
		if (p[i] < b[i])
			return (-1);
		if (p[i] > b[i])
			return (1);
		i++;
	}
	return (0);
}

void	read_rules(t_stacks *stack)
{
    char	*rules;

	while (1)
    {
    	rules = get_next_line(0);
		if (!rules)
			break ;
        if (!exec_rule(stack, rules))
		{
			ft_puts("Error");
			exit (1);
		}
    }
}

int	exec_rule(t_stacks *stack, char *rule)
{
	if (!ft_strncmp(rule, "sa\n", 3))
		sa(stack, false);
	else if (!ft_strncmp(rule, "sb\n", 3))
		sb(stack, false);
	else if (!ft_strncmp(rule, "ss\n", 3))
		ss(stack, false);
	else if (!ft_strncmp(rule, "ra\n", 3))
		ra(stack, false);
	else if (!ft_strncmp(rule, "rb\n", 3))
		rb(stack, false);
	else if (!ft_strncmp(rule, "rr\n", 3))
		rr(stack, false);
	else if (!ft_strncmp(rule, "rra\n", 4))
		rra(stack, false);
	else if (!ft_strncmp(rule, "rrb\n",  4))
		rrb(stack, false);
	else if (!ft_strncmp(rule, "rrr\n", 4))
		rrr(stack, false);
	else if (!ft_strncmp(rule, "pa\n", 3))
		pa(stack, false);
	else if (!ft_strncmp(rule, "pb\n", 3))
		pb(stack, false);
	else
		return (0);
	return (1);
}
