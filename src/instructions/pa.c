/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:17:28 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/08 01:31:44 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty    */

#include "../../inc/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
}

int main(void)
{
  t_list *stack_a = NULL;
  t_list *stack_b = NULL;

  // Create a linked list for list A
  t_list *t_list1 = (t_list *) malloc(sizeof(t_list));
  t_list1->data = 4;
  t_list1->next = NULL;
  stack_a = t_list1;

  t_list *t_list2 = (t_list *) malloc(sizeof(t_list));
  t_list2->data = 3;
  t_list2->next = stack_a;
  stack_a = t_list2;

  // Create a linked list for list B
  t_list *t_list3 = (t_list *) malloc(sizeof(t_list));
  t_list3->data = 2;
  t_list3->next = NULL;
  stack_b = t_list3;

  t_list *t_list4 = (t_list *) malloc(sizeof(t_list));
  t_list4->data = 1;
  t_list4->next = stack_b;
  stack_b = t_list4;


  // Call the ab function to move the first element from B to A
  pa(&stack_a, &stack_b);

  // Print the elements of list A
  t_list *current = stack_a;
  printf("List A: ");
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");

  // Print the elements of list B
  current = stack_b;
  printf("List B: ");
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
  return (0);
}
