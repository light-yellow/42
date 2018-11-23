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

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_idx;
    unsigned int dest_idx;
    unsigned int len;

    src_idx = 0;
    dest_idx = ft_strlen(dest);
    len = ft_strlen(src);
    len += (size <= dest_idx) ? size : dest_idx;
    while (src[src_idx] && dest_idx + 1 < size)
    {
        dest[dest_idx] = src[src_idx];
        dest_idx += 1;
        src_idx += 1;
    }
    dest[dest_idx] = '\0';
    return (len);
}
