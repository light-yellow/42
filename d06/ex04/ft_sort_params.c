void    ft_putchar(char ch);

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str += 1;
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i += 1;
    }
    return (s1[i] - s2[i]);
}

void    ft_sort(char **argv)
{
    int     i;
    int     sorted;
    char    *tmp;

    sorted = 0;
    while (!sorted)
    {
        sorted = 1;
        i = 1;
        while (argv[i + 1])
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                sorted = 0;
                tmp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = tmp;
            }
            i += 1;
        }
    }
}

void    ft_display(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i += 1;
    }
}

int     main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_sort(argv);
        ft_display(argc, argv);
    }
    return (0);
}
