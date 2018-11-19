#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    printf("String \"hewwo\" contains only printable characters: %d\n", ft_str_is_printable("hewwo"));
    printf("String \"Hewwo\\t\" contains only printable characters: %d\n", ft_str_is_printable("Hewwo\t"));
    printf("String \"hewwo fren\" contains only printable characters: %d\n", ft_str_is_printable("hewwo fren"));
    printf("String \"hewwo!\" contains only printable characters: %d\n", ft_str_is_printable("hewwo!"));
    return (0);
}
