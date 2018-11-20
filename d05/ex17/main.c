#include <stdio.h>

char    *ft_strncat(char *dest, char *src, int nb);

int     main(void)
{
    char str1[7] = "henlo \0";
    char str2[5] = "fren\0";
    printf("str1 = \"%s\" and str2 = \"%s\"\n", str1, str2);
    printf("str1 after concat: \"%s\"", ft_strncat(str1, str2, 13));
    return (0);
}
