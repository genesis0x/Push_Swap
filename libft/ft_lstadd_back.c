#include "../inc/push_swap.h"

static t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
