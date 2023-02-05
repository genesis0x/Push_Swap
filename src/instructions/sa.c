/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:54:02 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 20:18:25 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements. */

#include "../../inc/push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = (*stack_a)->next;
	(*stack_a)->next = temp->next;
	temp->next = *stack_a;
	*stack_a = temp;
}
