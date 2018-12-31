#include "ft.h"

int	ft_validate_operator(char *op)
{
	if (*op && !*(op + 1))
	{
		if (*op == '+')
			return (0);
		else if (*op == '-')
			return (1);
		else if (*op == '*')
			return (2);
		else if (*op == '/')
			return (3);
		else if (*op == '%')
			return (4);
	}
	return (-1);
}

int	ft_calculate(int num1, int num2, int operator)
{
	int (*operators[5]) (int, int);

	operators[0] = &ft_add;
	operators[1] = &ft_sub;
	operators[2] = &ft_mult;
	operators[3] = &ft_div;
	operators[4] = &ft_mod;
	return ((*operators[operator])(num1, num2));
}

int	main(int ac, char **av)
{
	int	num1;
	int	num2;
	int	operator;
	int	result;

	if (ac == 4)
	{
		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		operator = ft_validate_operator(av[2]);
		if (num2 == 0 && operator == 3)
			ft_putstr("Stop : division by zero");
		else if (num2 == 0 && operator == 4)
			ft_putstr("Stop : modulo by zero");
		else if (operator == -1)
			ft_putnbr(0);
		else
		{
			result = ft_calculate(num1, num2, operator);
			ft_putnbr(result);
		}
	}
	return (0);
}
