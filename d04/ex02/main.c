#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	for (int num = -3; num < 4; num += 1)
	{
		for (int pow = -2; pow < 4; pow += 1)
		{
			printf("%d to the power of %d is %d\n", num, pow, ft_iterative_power(num, pow));
		}
	}
}
