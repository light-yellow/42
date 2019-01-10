void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
				if ((*cmp)(tab[i], tab[i + 1]) > 0)
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
