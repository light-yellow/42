#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    printf("The string \"Hewwo\" contains only alphabetical characters: %d\n", ft_str_is_alpha("Hewwo"));
    printf("The string \"Howdy!\" contains only alphabetical characters: %d\n", ft_str_is_alpha("Howdy!"));
    printf("The string \"sup m8\" contains only alphabetical characters: %d\n", ft_str_is_alpha("sup m8"));
    return (0);
}
