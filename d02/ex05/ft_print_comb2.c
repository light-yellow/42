void	ft_putchar(char ch);

void	ft_print_digits2(int digit1, int digit2)
{
	ft_putchar(digit1 / 10 + '0');
	ft_putchar(digit1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(digit2 / 10 + '0');
        ft_putchar(digit2 % 10 + '0');
	if (digit1 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int digit1;
	int digit2;

	digit1 = 0;
	while (digit1 <= 98)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 99)
		{
			ft_print_digits2(digit1, digit2);
			digit2 += 1;
		}
		digit1 += 1;
	}
}
