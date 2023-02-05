/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:51:41 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 22:37:55 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

static int is_digit(char *s) 
{
    int i;

    i = 1 * (s[0] == '-' || s[0] == '+');
    while (s[i])
    { 
        if (!ft_isdigit(s[i])) 
            return (0);
        i++;
    }
    return (1);
}

void check_input(int ac, char **av) 
{
    int *arr = (int *)malloc(sizeof(int) * ac - 1);
    for (int i = 0; i < ac - 1; i++)
        arr[i] = atoi(av[i + 1]);
    for (int i = 1; i < ac; i++)
    {
        if (!is_digit(av[i]))
		{
			printf("Invalid Arg\n");
			exit(1);
		}
    }
    for (int i = 0; i < ac - 1; i++) 
	{
        for (int j = i + 1; j < ac - 1; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                free(arr);
				printf("Double Found\n");
                exit(1);
            }
        }
    }
}
