/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:18:21 by bcaffere          #+#    #+#             */
/*   Updated: 2023/02/24 16:35:06 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

enum					e_order
{
	Ascending,
	Descending,
	NotSorted
};

typedef struct s_stacks	t_stacks;

struct					s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
};

/*	INSTRUCTIONS	*/
void	pa(t_stacks *stack);
void	pb(t_stacks *stack);
void	sa(t_stacks *stack);
void	sb(t_stacks *stack);
void	ss(t_stacks *stack);
void	ra(t_stacks *stack);
void	rb(t_stacks *stack);
void	rr(t_stacks *stack);
void	rra(t_stacks *stack);
void	rrb(t_stacks *stack);
void	rrr(t_stacks *stack);

/*	Parsing	*/
void	check_input(t_stacks *stack);
void	init(int ac, char **av);
int		is_sorted(int *stack, int size);

/*	Initializing	*/
int		*init_arr(int ac, char **av, int *arr);

/*	Libft	*/
int		ft_strncmp(const char *s1, const char *s2);
int		ft_atoi(char *s);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);

/*	Sorting	*/

void	start_push_swap(t_stacks *stack);
void    solve(t_stacks *stack);
void	ft_rank(t_stacks *stack, int value, int rank);
void insertionSort(t_stacks *stack, int *arr);
#endif
