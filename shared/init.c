/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:26:14 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 18:12:08 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	init(char **av, char *temp, int size)
{
	t_stacks	stack;
	int			i;

	stack.size_a = size;
	stack.a = (int *)malloc(sizeof(int) * stack.size_a);
	if (!stack.a)
		stack.a = (NULL);
	av = ft_split(temp, 0, 0);
	free(temp);
	i = -1;
	while (av[++i])
		stack.a[i] = ft_atoi(av[i], 0, 0, 1);
	ft_free(av);
	check_input(&stack);
	return (stack);
}
