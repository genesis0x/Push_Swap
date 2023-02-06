/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:22:23 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/06 21:24:15 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	rb(t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	if (!temp)
		return ;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next->next = NULL;
}

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

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*tmp;

	last = *stack_b;
	tmp = *stack_b;
	while (last->next)
		last = last->next;
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
}
