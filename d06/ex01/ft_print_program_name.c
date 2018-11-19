void    f_putchar(char ch);

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
    (void)argc;
    ft_putstr(argv[0]);
    ft_putchar('\n');
    return (0);
}
