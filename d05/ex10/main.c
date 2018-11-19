#include <stdio.h>

char    *ft_strcapitalize(char *str);

int     main(void)
{
        char str[100] = "salut, comment tu vas ? 42mots quarAnte-deux; cinquantE+et+un\0";
        printf("Transformed string: %s", ft_strcapitalize(str));
        return (0);
}
