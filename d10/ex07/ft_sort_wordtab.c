int	ft_strcmp(char *s1, char *s2)
{
	while ((s1 || s2) && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1 += 1;
		s2 += 1;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	char	*tmp;
	int	i;
	int	sorted;

	if (tab)
	{
		sorted = 0;
		while (!sorted)
		{
			sorted = 1;
			i = 0;
			while (tab[i] && tab[i + 1])
			{
				if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				{
					sorted = 0;
					tmp = tab[i];
					tab[i] = tab[i + 1];
					tab[i + 1] = tmp;
				}
				i += 1;
			}
		}
	}
}
