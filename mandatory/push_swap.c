/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:59:12 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/07 03:12:20 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char **tmp;
		char *temp;
		int i;
		int size;

		i = 1;
		size = 0;
		temp = malloc(1);
		while (av[i])
		{
			tmp = ft_split(av[i], 0, 0);
			for (int i = 0; tmp[i]; i++)
			{
				++size;
				temp = ft_strjoin(temp, tmp[i]);
				temp = ft_strjoin(temp, " ");
			}
			i++;
		}
		free(tmp);
		init(av, temp, size);
	}
	return (0);
}
