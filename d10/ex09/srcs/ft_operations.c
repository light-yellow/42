#include "ft.h" 

void	ft_add(int num1, int num2)
{
	ft_putnbr(num1 + num2);
}

void	ft_sub(int num1, int num2)
{
	ft_putnbr(num1 - num2);
}

void	ft_mul(int num1, int num2)
{
	ft_putnbr(num1 * num2);
}

void	ft_div(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr("Stop : division by zero"); 
	else
		ft_putnbr(num1 / num2);
}

void	ft_mod(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr("Stop : modulo by zero");
	ft_putnbr(num1 % num2);
}
