void    ft_putchar(char ch);

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str += 1;
    }
}

int     main(int argc, char **argv)
{
    argc -= 1;
    while (argc > 0)
    {
        ft_putstr(argv[argc]);
        ft_putchar('\n');
        argc -= 1;
    }
    return (0);
}
