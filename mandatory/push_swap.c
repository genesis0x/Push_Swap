/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:59:12 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/16 17:14:16 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error(void)
{
	ft_puts("Error");
	exit(1);
}

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
			if (!av[i][0])
				error();
			temp = ft_strjoin(temp, av[i]);
			temp = ft_strjoin(temp, " ");
			i++;
		}
		stack = init(av, temp, ft_stack_size(av));
		start_push_swap(&stack);
	}
	return (0);
}
