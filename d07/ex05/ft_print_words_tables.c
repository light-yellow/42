void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i += 1;
		}
	}
}
