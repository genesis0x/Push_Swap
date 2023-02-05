/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:18:21 by bcaffere          #+#    #+#             */
/*   Updated: 2023/02/05 22:35:36 by hahadiou         ###   ########.fr       */
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

typedef struct s_list t_list;

struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
};

		/*	INSTRUCTIONS	*/
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);

		/*	Parsing	*/
void	check_input(int ac, char **av);
		/*	Initializing	*/
int    *init_arr(int ac, char **av, int *arr);
t_list	*init_list(int *arr, t_list *stack_a, int n);
void	indexing(t_list *lst, int *arr);
		/*	Libft	*/
int		ft_atoi(const char *s, int *flag);
t_list	*ft_lstnew(int value);
int		ft_lst_size(t_list *lst);
int		ft_strncmp(const char *s1, const char *s2);
		/*	Sorting	*/
void 	mergeSort(int *arr, int l, int r);
void    push_swap(t_list *stack_a);

#endif
