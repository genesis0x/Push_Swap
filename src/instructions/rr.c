/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:43:27 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 23:41:18 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stack_a;
	tmp2 = *stack_b;
	if (!tmp1 && !tmp2)
		return ;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp1->next->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp2->next->next = NULL;
}

// void	print_list(t_list *head)
// {
// 	t_list	*temp;

// 	temp = head;
// 	while (temp)
// 	{
// 		printf("%d ", temp->data);
// 		temp = temp->next;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*head1;
// 	t_list	*temp1;
// 	t_list	*head2;
// 	t_list	*temp2;

// 	head1 = NULL;
// 	temp1 = NULL;
// 	head2 = NULL;
// 	temp2 = NULL;
// 	for (int i = 0; i < 5; i++)
// 	{
// 		temp1 = (t_list *)malloc(sizeof(t_list));
// 		temp1->data = i;
// 		temp1->next = head1;
// 		head1 = temp1;
// 	}
// 	for (int i = 5; i < 10; i++)
// 	{
// 		temp2 = (t_list *)malloc(sizeof(t_list));
// 		temp2->data = i;
// 		temp2->next = head2;
// 		head2 = temp2;
// 	}
// 	printf("Before rr: \n");
// 	printf("List 1: ");
// 	print_list(head1);
// 	printf("List 2: ");
// 	print_list(head2);
// 	rr(&head1, &head2);
// 	printf("After rr: \n");
// 	printf("List 1: ");
// 	print_list(head1);
// 	printf("List 2: ");
// 	print_list(head2);
// 	return (0);
// }
