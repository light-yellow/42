#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = *begin_list1;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
		tmp->next = begin_list2;
	else
		*begin_list1 = begin_list2;
}
