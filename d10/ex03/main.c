#include <stdio.h>

int ft_any(char **tab, int (*f)(char*));

int ft_strlen(char *str)
{
    int count = 0;
    while (str[count])
        count += 1;
    return (count);
}

int main(void)
{
    char *tab[4] = {"00", "6", "123", 0};
    int (*f)(char *);
    f = &ft_strlen;
    printf("%d", ft_any(tab, f));
    return (0);
}
