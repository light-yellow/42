void	ft_putchar(char c);

void	ft_print_hex_addr(unsigned int line)
{

}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_print_hex_addr(i);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_hex();
		ft_putchar('\t');
		ft_print_printable();
		ft_putchar('\n');
		i += 1;
	}
	return (addr);
}
