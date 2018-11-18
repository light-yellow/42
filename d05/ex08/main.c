#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[12]= "Hewwo Howdy\0";
	printf("Transformed sting: %s", ft_strupcase(str));
	return (0);
}
