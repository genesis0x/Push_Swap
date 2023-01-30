#include "../inc/push_swap.h"

static int	find_idx(int *arr, int x)
{
	int	i;

	i = 0;
	while (arr[i] != x)
		i++;
	return (i);
}

void	add_index(t_list *lst, int *arr)
{
	while (lst)
	{
		lst->index = find_idx(arr, lst->value);
		lst = lst->next;
	}
	free(arr);
}
