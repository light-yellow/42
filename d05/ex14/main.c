#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    printf("String \"HEWWO\" contains only uppercase letters: %d\n", ft_str_is_uppercase("HEWWO"));
    printf("String \"HEWWo\" contains only upperercase letters: %d\n", ft_str_is_uppercase("HEWWo"));
    printf("String \"HEWWO FREN\" contains only uppercase letters: %d\n", ft_str_is_uppercase("HEWWO FREN"));
    printf("String \"HEWWO!\" contains only uppercase letters: %d\n", ft_str_is_uppercase("HEWWO!"));
    return (0);
}
