#include "../inc/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->head = 0;
	new->tag = 0;
	new->next = NULL;
	return (new);
}
