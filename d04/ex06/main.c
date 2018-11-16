#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	for (int i = -4; i < 200; i += 1)
		printf("number %d is prime: %d\n", i, ft_is_prime(i));
	printf("number %d is prime: %d\n", 2147483647, ft_is_prime(2147483647));
	return (0);
}
