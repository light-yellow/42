#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	for (int i = -9; i < 125; i += 1)
		printf("the square root of %d is %d\n", i, ft_sqrt(i));
	printf("the square root of %d is %d\n", 2147483647, ft_sqrt(2147483647));
	return (0);
}
