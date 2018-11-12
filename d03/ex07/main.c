#include <stdio.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char string1[6] = "Hewwo\0";
	char string2[5] = "Hiya\0";
	printf("The string \"Hewwo\" backwards is: %s\n", ft_strrev(string1));
	printf("The string \"Hiya\" backwards is: %s\n", ft_strrev(string2));
	return (0);
}
