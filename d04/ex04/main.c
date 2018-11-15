#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	for (int i = -2; i < 15; i += 1)
	{
		printf("element of the Fibonacci sequence at index %d is: %d\n", i, ft_fibonacci(i));
	}
	return (0);
}
