int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (*str < 'A' || *str > 'Z')
            return (0);
        str += 1;
    }
    return (1);
}
