#include "../inc/push_swap.h"

void	rr(t_list **lst1, t_list **lst2, int *ra, int *rb)
{
	rotate(lst1, 0);
	rotate(lst2, 0);
	(*ra)--;
	(*rb)--;
	write(1, "rr\n", 3);
}

void	rrr(t_list **lst1, t_list **lst2, int *rra, int *rrb)
{
	rotate(lst1, 1);
	rotate(lst2, 1);
	(*rra)--;
	(*rrb)--;
	write(1, "rrr\n", 4);
}

void	rr_nw(t_list **list_a, t_list **list_b)
{
	rotate(list_a, 0);
	rotate(list_b, 0);
}

void	rrr_nw(t_list **list_a, t_list **list_b)
{
	rotate(list_a, 1);
	rotate(list_b, 1);
}
