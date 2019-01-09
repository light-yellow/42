#include "ft_opp.h"

void    ft_usage(int num1, int num2)
{
        (void)num1;
        (void)num2;
        int i;

        i = 0;
        ft_putstr("error : only [ ");
        while (*(g_opptab[i].operation))
        {
                ft_putstr(g_opptab[i].operation);
                ft_putchar(' ');
		i += 1;
        }
        ft_putstr("] are accepted.");
}

int	main(int ac, char **av)
{
	int	num1;
	int	num2;
	int	i;

	if (ac == 4)
	{
		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		i = 0;
		while (*(g_opptab[i].operation))
		{
			if (ft_strcmp(g_opptab[i].operation, av[2]) == 0)
			{
				g_opptab[i].function(num1, num2);
				return (0);
			}
			i += 1;
		}
		g_opptab[i].function(num1, num2);
	}
	return (0);
}
