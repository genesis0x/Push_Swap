/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/07 03:31:04 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(char **av, char *temp, int size)
{
	t_stacks	stack;
	int			i;

	stack.size_a = size;
	stack.a = (int *)malloc(sizeof(int) * stack.size_a);
	if (!stack.a)
		return ;
	av = ft_split(temp, 0, 0);
	free(temp);
	i = 0;
	while (av[i])
	{
		stack.a[i] = ft_atoi(av[i], 0, 0, 1);
		i++;
	}
	check_input(&stack);
	start_push_swap(&stack);
}