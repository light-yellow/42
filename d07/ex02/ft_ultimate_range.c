#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int i;

    i = 0;
    tab = NULL;
    if (min < max)
    {
        tab = (int *)malloc(sizeof(int) * (max - min));
        if (tab)
        {
            while (min < max)
            {
                tab[i] = min;
                min += 1;
                i += 1;
            }
        }
    }
    *range = tab;
    return (i);
}
