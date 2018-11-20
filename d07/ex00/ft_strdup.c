#include <stdlib.h>

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        len += 1;
        str += 1;
    }
    return (len);
}

char    *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    dest = (char *)malloc(ft_strlen(src) + 1);
    if (dest)
    {
        while (src[i])
        {
            dest[i] = src[i];
            i += 1;
        }
        dest[i] = '\0';
    }
    return (dest);
}
