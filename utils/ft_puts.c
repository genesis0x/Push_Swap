/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:38:18 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/16 16:49:35 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_puts(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(2, &s[i++], 1);
	write(2, "\n", 1);
}
