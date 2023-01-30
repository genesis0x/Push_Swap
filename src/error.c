#include "../inc/push_swap.h"

void	terminate(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	command_err(t_list *list_a, t_list *list_b)
{
	if (list_a)
		free_list(list_a);
	if (list_b)
		free_list(list_b);
	terminate();
}
