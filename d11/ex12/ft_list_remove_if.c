#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*next;
	t_list	*current;

	if (begin_list && *begin_list)
	{
		current = *begin_list;
		while (current && current->next)
		{
			next = current->next;
			if ((*cmp)(next->data, data_ref) == 0)
			{
				current->next = next->next;
				free(next);
			}
			current = current->next;
		}
		current = *begin_list;
		if ((*cmp)(current->data, data_ref) == 0)
		{
			*begin_list = current->next;
			free(current);
		}
	}
}
