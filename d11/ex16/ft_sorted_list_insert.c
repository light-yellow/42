#include "ft_list.h"

void	ft_insert(t_list *current, t_list *to_insert, int (*cmp)())
{
	unsigned int	inserted;
	t_list		*next;

	inserted = 0;
	while (current->next && !inserted)
	{
		if ((*cmp)(current->next->data, to_insert->data) > 0)
		{
			next = current->next;
			current->next = to_insert;
			to_insert->next = next;
			inserted = 1;;
		}
		current = current->next;
	}
	if (!inserted)
		current->next = to_insert;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current_elem;
	t_list	*new_elem;

	if (begin_list)
	{
		current_elem = *begin_list;
		new_elem = ft_create_elem(data);
		if (new_elem)
		{
			if (current_elem)
			{
				if ((*cmp)(current_elem->data, new_elem->data) > 0)
				{
					new_elem->next = current_elem;
					*begin_list = new_elem;
				}
				else
					ft_insert(current_elem, new_elem, cmp);
			}
			else
				*begin_list = new_elem;
		}
	}
}
