/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:45:35 by hahadiou          #+#    #+#             */
/*   Updated: 2023/03/15 18:12:42 by hahadiou         ###   ########.fr       */
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

void					pa(t_stacks *stack, bool print);
void					pb(t_stacks *stack, bool print);
void					sa(t_stacks *stack, bool print);
void					sb(t_stacks *stack, bool print);
void					ss(t_stacks *stack, bool print);
void					ra(t_stacks *stack, bool print);
void					rb(t_stacks *stack, bool print);
void					rr(t_stacks *stack, bool print);
void					rra(t_stacks *stack, bool print);
void					rrb(t_stacks *stack, bool print);
void					rrr(t_stacks *stack, bool print);
void					check_input(t_stacks *stack);
t_stacks				init(char **av, char *t, int size);
int						is_sorted(int *stack, int size);
void					start_push_swap(t_stacks *stack);
void					solve(t_stacks *stack);
void					sort_small(t_stacks *stack);
int						get_index(int *stack, int size, int n);
void					insertion_sort(t_stacks *stack, int *arr);
void					range_sort(t_stacks *stack, int range, int i);

/* Bonus */
void					read_rules(t_stacks *stack);
int						exec_rule(t_stacks *stack, char *rule);

#endif
