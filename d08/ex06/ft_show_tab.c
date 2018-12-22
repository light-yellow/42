#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}

void	ft_putnbr(int nbr)
{
	unsigned int	num;

	if (nbr < 0)
	{
		ft_putchar('-');
		num = -nbr;
	}
	else
		num = nbr;
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar('0' + num % 10);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j += 1;
		}
		i += 1;
	}
}
