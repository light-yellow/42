#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    printf("The string \"1Hewwo\" contains only numeric characters: %d\n", ft_str_is_numeric("1Hewwo"));
    printf("The string \"3453\" contains only numeric characters: %d\n", ft_str_is_numeric("3453"));
    printf("The string \"\" contains only numeric characters: %d\n", ft_str_is_numeric(""));
    return (0);
}
