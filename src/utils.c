/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:47:55 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/12 22:23:20 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int	ft_atoi(char *s)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
	{
        if (!ft_isdigit(s[i]))
        {
            printf("Invalid Arg\n");
            exit(1);
        }
		nbr = nbr * 10 + s[i] - 48;
		i++;
	}
	return (nbr * sign);
}
