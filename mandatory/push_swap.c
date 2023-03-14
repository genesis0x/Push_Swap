/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:59:12 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 21:13:51 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	*temp;
	int		i;

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
		init(av, temp, ft_stack_size(av));
	}
    check_leaks();
	while (1);
	return (0);
}
