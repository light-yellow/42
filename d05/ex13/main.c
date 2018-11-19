#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    printf("String \"hewwo\" contains only lowercase letters: %d\n", ft_str_is_lowercase("hewwo"));
    printf("String \"Hewwo\" contains only lowercase letters: %d\n", ft_str_is_lowercase("Hewwo"));
    printf("String \"hewwo fren\" contains only lowercase letters: %d\n", ft_str_is_lowercase("hewwo fren"));
    printf("String \"hewwo!\" contains only lowercase letters: %d\n", ft_str_is_lowercase("hewwo!"));
    return (0);
}
