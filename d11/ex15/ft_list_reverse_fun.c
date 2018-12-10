#include "ft_list.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	unsigned int	count;
	t_list		*tmp;

	count = 0;
	tmp = begin_list;
	while (tmp)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list		*current;
	t_list		*next;
	char		*tmp_data;
	unsigned int	len;
	unsigned int	i;

	if (begin_list && begin_list->next)
	{
		len = ft_list_size(begin_list);
		while (len > 1)
		{
			i = 1;
			current = begin_list;
			while (current->next && i < len)
			{
				tmp_data = current->next->data;
				current->next->data = current->data;
				current->data = tmp_data;
				current = current->next;
				i += 1;
			}
			len -= 1;
		}		
	}
}
