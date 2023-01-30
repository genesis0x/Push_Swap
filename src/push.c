#include "../inc/push_swap.h"

static void	push(t_list **lst1, t_list **lst2)
{
	t_list	*tmp;

	if (*lst2)
	{
		tmp = ft_lstake_first(lst2);
		ft_lstadd_front(lst1, tmp);
	}
}

void	pa(t_list **lst1, t_list **lst2, int w)
{
	push(lst1, lst2);
	if (w)
		write(1, "pa\n", 3);
}

void	pb(t_list **lst1, t_list **lst2, int w)
{
	push(lst2, lst1);
	if (w)
		write(1, "pb\n", 3);
}
