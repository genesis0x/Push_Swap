/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:59:12 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 23:39:15 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
void check_leaks();

int main(int ac, char **av)
{
    if (ac == 1)
        return (0);
    check_input(ac, av);
    //init(ac, av);
}
