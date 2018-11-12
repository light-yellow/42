#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("I converted \"42\" correctly: %d\n", ft_atoi("42"));
	printf("I converted \"-42\" correctly: %d\n", ft_atoi("-42"));
	printf("I converted \"0\" correctly: %d\n", ft_atoi("0"));
	printf("I converted \"2147483647\" correctly: %d\n", ft_atoi("2147483647"));
	printf("I converted \"-2147483648\" correctly: %d\n", ft_atoi("-2147483648"));
	printf("I converted \"+42\" correctly: %d\n", ft_atoi("+42"));
	printf("I converted \"   \t342add\" correctly: %d\n", ft_atoi("   \t342add"));
	return (0);
}
