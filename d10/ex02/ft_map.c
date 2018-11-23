#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *result_tab;

    i = 0;
    result_tab = (int *)malloc(sizeof(int) * length);
    if (result_tab)
    {
        while (i < length)
        {
            result_tab[i] = f(tab[i]);
            i += 1;
        }
    }
    return result_tab;
}
