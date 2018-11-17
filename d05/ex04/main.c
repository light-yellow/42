#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[6] = "Hewwo\0";
	char dest[6] = "olleY\0";
	printf("Dest before copying: %s\n", dest);
	ft_strncpy(dest, src, 4);
	printf("Dest after copying: %s", dest);
	return (0);
}
