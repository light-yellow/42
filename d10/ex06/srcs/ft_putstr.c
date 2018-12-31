#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}
