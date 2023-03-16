/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:47:55 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/14 23:26:20 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *s, int i, long nbr, int sign)
{
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
			ft_puts("ERROR");
			exit(1);
		}
		nbr = nbr * 10 + s[i] - 48;
		i++;
	}
	if (nbr > INT_MAX || nbr < INT_MIN)
	{
		ft_puts("ERROR");
		exit(1);
	}
	return (nbr * sign);
}
