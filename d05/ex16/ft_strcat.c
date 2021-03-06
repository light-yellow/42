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

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = ft_strlen(dest);
    j = 0;
    while (src[j])
    {
        dest[i] = src[j];
        i += 1;
        j += 1;
    }
    dest[i] = '\0';
    return (dest);
}
