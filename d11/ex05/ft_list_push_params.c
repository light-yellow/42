#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int	i;
	t_list	*elem;
	t_list	*tmp;
	
	i = 0;
	elem = NULL;
	while (i < ac)
	{
		tmp = elem;
		elem = ft_create_elem((void *)av[i]);
		elem->next = tmp;
		i += 1;		
	}
	return (elem);
}
