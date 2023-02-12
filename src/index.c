/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:51:46 by hahadiou          #+#    #+#             */
/*   Updated: 2023/02/07 14:15:58 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	assign_index(int *arr, int size)
{
	int	min;
	int	max;
	int	i;
	int	range;

	min = arr[0];
	max = arr[0];
	// find the min and max elements in the array
	for (i = 1; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		else if (arr[i] > max)
			max = arr[i];
	}
	// assign indices to the elements in the array
	for (i = 0; i < size; i++)
		arr[i] = arr[i] - min;
	// adjust the indices so that they start from 0
	range = max - min + 1;
	for (i = 0; i < size; i++)
		arr[i] = arr[i] * size / range;
}

int	main(int ac, char **av)
{
	int	*arr = (int *)malloc(sizeof(int) * ac - 1);
	for (int i = 0; i < ac - 1; i++)
		arr[i] = atoi(av[i + 1]);
	int	size;
	int	i;

	size = ac - 1;
	assign_index(arr, size);
	printf("The array with assigned index: \n");
	for (i = 0; i < size; i++)
		printf("[%d]\n", arr[i]);
	return (0);
}
