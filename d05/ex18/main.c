#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);


int main(void)
{
    char dest0[10] = "\0";
    char dest[10] = "000";
    char src[10] = "123456789";
    printf("When dest size is 0: dest=%s return value=%d\n", dest0, ft_strlcat(dest0, src, 5));
    printf("When dest size is equal to size: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 3));
    printf("When dest size is one less than size: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 4));
    printf("When dest size is less than size: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 6));
    printf("When dest size is greater than size: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 2));
    printf("When size is greater than dest size and src is empty: dest=%s return value=%d\n", dest, ft_strlcat(dest, "", 7));
    printf("When size is 0: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 0));
    printf("When size is 234567: dest=%s return value=%d\n", dest, ft_strlcat(dest, src, 234567)); 
    return (0);
}
