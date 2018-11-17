#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%s and %s are equal: %d\n", "ababaca", "ababaca", ft_strcmp("ababaca", "ababaca"));
	printf("%s and %s are equal: %d\n", "", "", ft_strcmp("", ""));
	printf("%s and %s are equal: %d\n", "ababac", "ababac", ft_strcmp("ababac", "ababac"));
	printf("%s and %s are equal: %d\n", "a", "a", ft_strcmp("a", "a"));
	printf("%s and %s are equal: %d\n", "aba", "", ft_strcmp("aba", ""));
	printf("%s and %s are equal: %d\n", "", "aba", ft_strcmp("", "aba"));
	printf("%s and %s are equal: %d\n", "shh", "aba", ft_strcmp("shh", "aba"));
	printf("%s and %s are equal: %d\n", "sh", "shh", ft_strcmp("sh", "shh"));
	return (0);
}
