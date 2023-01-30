#include "../inc/push_swap.h"

int	idx_last(t_list *lst)
{
	int	tmp;

	tmp = lst->index;
	while (lst->next != NULL)
		lst = lst->next;
	tmp = lst->index;
	return (tmp);
}

int	idx_min(t_list *lst)
{
	int	idx;

	idx = lst->index;
	while (lst)
	{
		if (lst->index < idx)
			idx = lst->index;
		lst = lst->next;
	}
	return (idx);
}
