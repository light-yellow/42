#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*tmp;
	unsigned int	i;

	tmp = begin_list;
	i = 0;
	while (tmp && i <= nbr)
	{
		if (i == nbr)
			return (tmp);
		tmp = tmp->next;
		i += 1;
	}
	return (NULL);
}
