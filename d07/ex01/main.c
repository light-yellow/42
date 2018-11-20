#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
    int *tab = ft_range(-3, 3);
    printf("the array of ints between -3 and 3 is: {%d, %d, %d, %d, %d, %d}", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
