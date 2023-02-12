/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:22:26 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/08 07:26:24 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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

// void	sb(t_list **stack_b)
// {
// 	t_list	*temp;

// 	if (*stack_b == NULL || (*stack_b)->next == NULL)
// 		return ;
// 	temp = (*stack_b)->next;
// 	(*stack_b)->next = temp->next;
// 	temp->next = *stack_b;
// 	*stack_b = temp;
// }
	
void ss(int *stack_a, int *stack_b, int size) {
    if (size < 2) return;  // do nothing if there is only one or no elements

    int temp = stack_a[size-1]; 
    stack_a[size - 1] = stack_b[size - 1]; 
    stack_b[size - 1] = temp;

    temp = stack_a[size-2]; 
    stack_a[size - 2] = stack_b[size-2]; 
    stack_b[size - 2] = temp; 
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Before swap:\n");
    printf("Stack a: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Stack b: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    ss(a, b, size);

    printf("After swap:\n");
    printf("Stack a: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Stack b: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}