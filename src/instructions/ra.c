/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:27:13 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/05 23:41:05 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	if (!temp)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next->next = NULL;
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
// 	t_list	*head;
// 	t_list	*temp;

// 	head = NULL;
// 	temp = NULL;
// 	for (int i = 0; i < 5; i++)
// 	{
// 		temp = (t_list *)malloc(sizeof(t_list));
// 		temp->data = i;
// 		temp->next = head;
// 		head = temp;
// 	}
// 	printf("Before shift up: ");
// 	print_list(head);
// 	ra(&head);
// 	printf("After shift up: ");
// 	print_list(head);
// 	return (0);
// }
