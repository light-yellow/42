#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%s and %s are equal: %d\n", "ababaca", "ababaca", ft_strncmp("ababaca", "sababaca", 0));
	printf("%s and %s are equal: %d\n", "ababaca", "ababaca", ft_strncmp("ababaca", "ababaca", 4));
	printf("%s and %s are equal: %d\n", "ababac", "ababaca", ft_strncmp("ababac", "ababaca", 6));
	printf("%s and %s are equal: %d\n", "ababac", "ababaca", ft_strncmp("ababac", "ababaca", 7));
	printf("%s and %s are equal: %d\n", "ababac", "ababaca", ft_strncmp("ababacb", "ababaca", 7));

	return (0);
}
