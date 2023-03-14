/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:40:11 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 14:55:56 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int ft_stack_size(char **av)
{
	char	**tmp;
	int		i;
	int		size;
	int		j;

	i = 1;
	size = 0;
	while (av[i])
	{
		tmp = ft_split(av[i], 0, 0);
		j = -1;
		while (tmp[++j])
		{
			++size;
            free(tmp[j]);
		}
        free(tmp);
		i++;
	}
    tmp = NULL;
    return (size);
}