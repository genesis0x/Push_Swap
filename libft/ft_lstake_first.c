#include "../inc/push_swap.h"

t_list	*ft_lstake_first(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return (NULL);
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	return (tmp);
}
