#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[12]= "Hewwo Howdy\0";
	printf("Transformed sting: %s", ft_strlowcase(str));
	return (0);
}
