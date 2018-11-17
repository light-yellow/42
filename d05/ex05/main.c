#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str1 = "ababaca";
	char	*str2 = "abaca";

	printf("found subsring: %s", ft_strstr(str1, str2));
	return (0);
}
