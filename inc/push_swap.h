/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:18:21 by bcaffere          #+#    #+#             */
/*   Updated: 2023/03/03 20:16:59 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "utils.h"
# include <stdbool.h>

typedef struct s_stacks	t_stacks;

struct					s_stacks
{
	int					*a;
	int					*b;
	int					size_a;
	int					size_b;
};

void					pa(t_stacks *stack, int print);
void					pb(t_stacks *stack, int print);
void					sa(t_stacks *stack, int print);
void					sb(t_stacks *stack, int print);
void					ss(t_stacks *stack, int print);
void					ra(t_stacks *stack, int print);
void					rb(t_stacks *stack, int print);
void					rr(t_stacks *stack, int print);
void					rra(t_stacks *stack, int print);
void					rrb(t_stacks *stack, int print);
void					rrr(t_stacks *stack, int print);
void					check_input(t_stacks *stack);
void					init(int ac, char **av);
int						is_sorted(int *stack, int size);
void					start_push_swap(t_stacks *stack);
void					solve(t_stacks *stack);
void					insertion_sort(t_stacks *stack, int *arr);
void					range_sort(t_stacks *stack, int range, int i);

#endif
