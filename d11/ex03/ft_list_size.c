#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;
	t_list	*tmp;

	count = 0;
	tmp = begin_list;
	while (tmp)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
