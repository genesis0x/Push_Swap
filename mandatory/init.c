/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/03 20:05:05 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int ac, char **av)
{
	t_stacks	stack;
	int			i;

	stack.a = (int *)malloc(sizeof(int) * ac - 1);
	if (!stack.a)
		return ;
	stack.size_a = ac - 1;
	i = -1;
	while (++i < stack.size_a)
		stack.a[i] = ft_atoi(av[i + 1], 0, 0, 1);
	check_input(&stack);
	start_push_swap(&stack);
}
