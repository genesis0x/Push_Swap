/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:18:21 by bcaffere          #+#    #+#             */
/*   Updated: 2023/02/12 22:42:50 by hahadiou         ###   ########.fr       */
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
void	sa(int *stack);
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
int    start_push_swap(int *stack , int size);

#endif
