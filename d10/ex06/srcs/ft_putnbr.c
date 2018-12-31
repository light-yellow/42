void	ft_putchar(char ch);

void	ft_putnbr(int nb)
{
	unsigned int nb_tmp;

	if (nb < 0)
	{
		ft_putchar('-');
		nb_tmp = -nb;
	}
	else
		nb_tmp = nb;
	if (nb_tmp >= 10)
		ft_putnbr(nb_tmp / 10);
	ft_putchar(nb_tmp % 10 + '0');
}
