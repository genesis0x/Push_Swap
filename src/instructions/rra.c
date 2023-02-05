/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:49:46 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 22:01:36 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*tmp;

	last = *stack_a;
	tmp = *stack_a;
	while (last->next)
		last = last->next;
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
}

// int main() {
//     t_list *head = NULL;
//     t_list *second = NULL;
//     t_list *third = NULL;

//     // allocate 3 t_lists in the heap
//     head = (t_list *)malloc(sizeof(t_list));
//     second = (t_list *)malloc(sizeof(t_list));
//     third = (t_list *)malloc(sizeof(t_list));

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;

//     rra(&head);

//     // display the list after shifting elements
//     printf("The linked list after rra: \n");
//     while (head != NULL) {
//         printf("%d\n", head->data);
//         head = head->next;
//     }

//     return (0);
// }
