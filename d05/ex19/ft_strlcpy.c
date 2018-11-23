int    ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count += 1;
    return (count);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (src[i] && i + 1 < size)
    {
        dest[i] = src[i];
        i += 1;
    }
    if (size > 0)
        dest[i] = '\0';
    return (ft_strlen(src));
}
