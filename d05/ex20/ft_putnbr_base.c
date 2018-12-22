void	ft_putchar(char c);

unsigned int	ft_strlen(char *str)
{
	unsigned int count;

	count = 0;
	while(str[count])
		count += 1;
	return (count);
}

int		ft_is_base_correct(char *base)
{
	char	*tmp;

	if (!base || !base[0] || !base[1])
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		tmp = base + 1;
		while (*tmp)
		{
			if (*base == *tmp)
				return (0);
			tmp += 1;
		}
		base += 1;
	}
	return (1);

}

void		ft_display(unsigned int num, unsigned int base, char *base_values)
{
	if (num >= base)
		ft_display(num / base, base, base_values);
	ft_putchar(base_values[num % base]);
}

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	unsigned int	base_system;

	if (ft_is_base_correct(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			num = -nbr;
		}
		else
			num = nbr;
		base_system = ft_strlen(base);
		ft_display(num, base_system, base);
	}
}
