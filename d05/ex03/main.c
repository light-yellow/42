#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[6] = "Hewwo\0";
	char dest[6] = "Yello\0";
	printf("Dest before copying: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Dest after copying: %s", dest);
	return (0);
}
