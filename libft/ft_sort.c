#include "../inc/push_swap.h"

static void	swap_num(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (arr[i] < arr[j])
				swap_num(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
}
