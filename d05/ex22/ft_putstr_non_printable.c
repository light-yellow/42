#define BASE "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(int c)
{
	if (c >= 16)
		ft_printhex(c / 16);
	ft_putchar(BASE[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			ft_putchar('\\');
			if (*str < 16)
				ft_putchar('0');
			ft_printhex(*str);
		}
		else
			ft_putchar((int)(*str));
		str += 1;
	}
}
