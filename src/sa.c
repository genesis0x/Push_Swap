/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:54:02 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/12 22:44:41 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements. */

#include "../inc/push_swap.h"

// void	sa(t_list **stack_a)
// {
// 	t_list	*temp;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp = (*stack_a)->next;
// 	(*stack_a)->next = temp->next;
// 	temp->next = *stack_a;
// 	*stack_a = temp;
// }

void 	sa(int *stack) 
{
	int tmp = 0;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	printf("sa\n");     
}

// int main() {
//     int a[] = {1, 2, 3, 4, 5};
//     int size = sizeof(a) / sizeof(a[0]);

//     printf("Before swap:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     sa(a);

//     printf("After swap:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }
