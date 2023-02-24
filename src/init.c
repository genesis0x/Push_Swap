/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/24 17:36:52 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	init(int ac, char **av)
{
	t_stacks	stack;

	(void)av;
	stack.a = (int *)malloc(sizeof(int) * ac - 1);
	if (!stack.a)
		return ;
	stack.size_a = ac - 1;
	for (int i = 0; i < stack.size_a; i++)
		stack.a[i] = ft_atoi(av[i + 1]);
	check_input(&stack);
	start_push_swap(&stack);
}
