#include "ft_list.h"

void	ft_swap_ptrs(t_list **begin_list, t_list *previous, t_list *current, t_list *next)
{
	current->next = next->next;
	if (previous)
		previous->next = next;
	else
		*begin_list = next;
        next->next = current;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	unsigned int	sorted;
	t_list		*previous;
	t_list		*current;
	t_list		*next;

	sorted = 0;
	while (begin_list && *begin_list && !sorted)
	{
		previous = NULL;
		current = *begin_list;
		sorted = 1;
		while (current && current->next)
		{
			next = current->next;
			if ((*cmp)(current->data, next->data) > 0)
			{
				sorted = 0;
				ft_swap_ptrs(begin_list, previous, current, next);
			}
			previous = current;
			current = current->next;
		}
	}
}
