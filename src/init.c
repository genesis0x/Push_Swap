/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/12 22:42:35 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    init(int ac, char **av)
{
	(void)av;
	t_stacks	stack;
	t_size		size;

	stack.a = (int *)malloc(sizeof(int) * ac - 1);
	if (!stack.a)
		return ;
	size.a = ac -1 ;
	stack.b = (int *)malloc(sizeof(int) * ac - 1);
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	size.b = 0;
	for (int i = 0; i < size.a; i++)
	 	stack.a[i] = ft_atoi(av[i + 1]);
	check_input(&stack, &size);
	start_push_swap(stack.a, size.a);
}
