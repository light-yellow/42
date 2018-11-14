void	ft_putchar(char ch);

void	ft_print_curr_comb(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i += 1;
	}
	if (tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_find_next_comb(int *tab, int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		tab[n - i] += 1;
		if (tab[n - i] <= 9 - i + 1)
			break ;
		i += 1;
	}
	i = 0;
	while (i + 1 < n)
	{
		if (tab[i + 1] > 9)
		{
			if (tab[i] + 1 > 9)
			{
				tab[0] = 9;
				break ;
			}
			tab[i + 1] = tab[i] + 1;
		}
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i += 1;
	}
	while (tab[0] <= 10 - n)
	{
		ft_print_curr_comb(tab, n);
		ft_find_next_comb(tab, n);
	}
}
