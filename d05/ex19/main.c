#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[100] = "\0";
    printf("when dest is empty: dest=%s src=000 returned len=%d\n", dest, ft_strlcpy(dest, "000", 10));
    printf("when size is less than src len: dest=%s src=123 returned len=%d\n", dest, ft_strlcpy(dest, "123", 2));
    printf("when size is greater than src len: dest=%s src=234 returned len=%d\n", dest, ft_strlcpy(dest, "234", 10));
    printf("when size is 0: dest=%s src=000 returned len=%d\n", dest, ft_strlcpy(dest, "000", 0));
    printf("when src is empty: dest=%s src=\"\" returned len=%d\n", dest, ft_strlcpy(dest, "", 10));
   
    return (0);
}
