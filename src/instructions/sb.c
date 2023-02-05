/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:55:24 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 23:42:16 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. */

#include "../../inc/push_swap.h"

void	sb(t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
}
	