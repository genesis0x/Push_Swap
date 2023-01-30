#include "../inc/push_swap.h"

static int	count_tag(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		if (lst->tag == 1)
			count++;
		lst = lst->next;
	}
	return (count);
}

int	need_sa(t_list *lst)
{
	int	max_len;

	max_len = count_tag(lst);
	swap(lst);
	markup_clean(lst);
	markup(lst);
	if (max_len < count_tag(lst))
		return (1);
	else
	{
		swap(lst);
		markup_clean(lst);
		markup(lst);
		return (0);
	}
}

static int	med_b(t_list *lst)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (lst)
	{
		i = i + lst->index;
		j++;
		lst = lst->next;
	}
	return (i / j);
}

int	need_rb(t_list *lst)
{
	t_list	*tmp;

	if (!(lst->next))
		return (0);
	tmp = lst->next;
	if (lst->index > med_b(tmp))
		return (1);
	return (0);
}
