#include <stdlib.h>
#include "ft_stock_par.h"

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count += 1;
	return (count);
}

char	*ft_strdup(char *str)
{
	int	len;
	char	*dup;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup)
	{
		while (len >= 0)
		{
			dup[len] = str[len];
			len -= 1;
		}
	}
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	unsigned int	i;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (tab)
	{
		i = 0;
		while (i < ac)
		{
			tab[i].size_param = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			tab[i].tab = ft_split_whitespaces(av[i]);
			i += 1;
		}
		tab[i].str = 0;
	}
	return (tab);
}
