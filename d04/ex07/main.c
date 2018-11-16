#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	for (int i = -2; i < 124; i += 1)
		printf("Next prime after %d (including) is: %d\n", i, ft_find_next_prime(i));
	printf("Next prime after %d (including) is: %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("Next prime after %d (including) is: %d\n", 2147483648, ft_find_next_prime(2147483648));
}
