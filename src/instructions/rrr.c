/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:58:46 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 23:41:30 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

// int	main(void)
// {
// 	t_list	*head1;
// 	t_list	*second1;
// 	t_list	*third1;
// 	t_list	*head2;
// 	t_list	*second2;
// 	t_list	*third2;

// 	head1 = NULL;
// 	second1 = NULL;
// 	third1 = NULL;
// 	head2 = NULL;
// 	second2 = NULL;
// 	third2 = NULL;
// 	// allocate 6 t_lists in the heap
// 	head1 = (t_list *)malloc(sizeof(t_list));
// 	second1 = (t_list *)malloc(sizeof(t_list));
// 	third1 = (t_list *)malloc(sizeof(t_list));
// 	head2 = (t_list *)malloc(sizeof(t_list));
// 	second2 = (t_list *)malloc(sizeof(t_list));
// 	third2 = (t_list *)malloc(sizeof(t_list));
// 	head1->data = 1;
// 	head1->next = second1;
// 	second1->data = 2;
// 	second1->next = third1;
// 	third1->data = 3;
// 	third1->next = NULL;
// 	head2->data = 4;
// 	head2->next = second2;
// 	second2->data = 5;
// 	second2->next = third2;
// 	third2->data = 6;
// 	third2->next = NULL;
// 	rrr(&head1, &head2);
// 	// display the lists after shifting elements
// 	printf("The first linked list after rrr: \n");
// 	while (head1 != NULL)
// 	{
// 		printf("%d\n", head1->data);
// 		head1 = head1->next;
// 	}
// 	printf("The second linked list after rrr: \n");
// 	while (head2 != NULL)
// 	{
// 		printf("%d\n", head2->data);
// 		head2 = head2->next;
// 	}
// 	return (0);
// }
