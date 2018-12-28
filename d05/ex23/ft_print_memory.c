#define hex_base "0123456789abcdef"

void	ft_putchar(char c);

void	ft_putnbr_hex(unsigned int num)
{
	if (num >= 16)
                ft_putnbr_hex(num / 16);
        ft_putchar(hex_base[num % 16]);
}

void	ft_print_hex_addr(unsigned int num)
{
	unsigned int    len;
	unsigned int	tmp;

        len = 8;
	tmp = num;
        while (tmp > 0)
        {
                len -= 1;
                tmp /= 16;
        }
	while (len > 0)
        {
                ft_putchar('0');
                len -= 1;
        }
	if (num > 0)
		ft_putnbr_hex(num);
}

void	ft_print_hex(unsigned char *str, unsigned int size,
					unsigned int printed)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && i + printed < size)
	{
		if (*(str + i) < 16)
			ft_putchar('0');
		ft_putnbr_hex((unsigned int)(*(str + i)));
		i += 1;
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	while (i < 16)
        {
                ft_putchar(' ');
                ft_putchar(' ');
                if (i % 2)
                        ft_putchar(' ');
                i += 1;
        }
}

void	ft_print_printable(unsigned char *str, unsigned int size,
						unsigned int printed)
{
	unsigned int	i;
	
	i = 0;
	while (i < 16 && i + printed < size)
	{
		if (str[i] < 32 || str[i] >= 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i += 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	printed;
	unsigned char	*str;

	printed = 0;
	str = (unsigned char *)addr;
	while (printed < size)
	{
		ft_print_hex_addr(printed);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_hex(str + printed, size, printed);
		ft_putchar(' ');
		ft_print_printable(str + printed, size, printed);
		ft_putchar('\n');
		printed += 16;
	}
	return (addr);
}
