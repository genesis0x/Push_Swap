/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:18:21 by bcaffere          #+#    #+#             */
/*   Updated: 2023/02/13 23:54:09 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_stacks t_stacks;
typedef struct s_size	t_size;

struct s_stacks
{
	int	*a;
	int	*b;
};

struct s_size
{
	int a;
	int b;
};

# define ASCENDING 0
# define DESCENDING 1
# define OPT 0
# define STACK 1

		/*	INSTRUCTIONS	*/
void	pa(t_stacks *stack, t_size *size);
void	pb(t_stacks *stack, t_size *size);
void 	sa(t_stacks *stack);
void 	sb(t_stacks *stack);
void    ss(t_stacks *stack);
void ra(t_stacks *stack, t_size *size);
void rb(t_stacks *stack, t_size *size);
void	rr(t_stacks *stack, t_size *size);
void rra(t_stacks *stack, t_size *size);
void rrb(t_stacks *stack, t_size *size);
void rrr(t_stacks *stack, t_size *size);

		/*	Parsing	*/
void	check_input(t_stacks *stack, t_size *size);
void	init(int ac, char **av);
int 	is_sorted(int *stack, int size, int order);
		/*	Initializing	*/
int    *init_arr(int ac, char **av, int *arr);

		/*	Libft	*/
int		ft_strncmp(const char *s1, const char *s2);
int		ft_atoi(char *s);
int 	ft_isdigit(int c);
char	**ft_split(char const *s, char c);
		/*	Sorting	*/
int    start_push_swap(t_stacks *stack, t_size *size);

#endif
