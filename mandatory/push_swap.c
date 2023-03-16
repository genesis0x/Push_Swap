/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:59:12 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 22:41:26 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stack;
	char		*temp;
	int			i;

	temp = NULL;
	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			temp = ft_strjoin(temp, av[i]);
			temp = ft_strjoin(temp, " ");
			i++;
		}
		stack = init(av, temp, ft_stack_size(av));
		start_push_swap(&stack);
	}
	return (0);
}
