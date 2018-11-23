#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int ft_find_square(int nb)
{
    return (nb * nb);
}

int main(void)
{
    int (*f)(int);
    f = &ft_find_square;
    int tab1[4] = {2, 3, 5, 7};
    int *tab2 = ft_map(tab1, 4, f);
    printf("original array: {%d, %d, %d, %d}\n", tab1[0], tab1[1], tab1[2], tab1[3]);
    printf("modified array: {%d, %d, %d, %d}", tab2[0], tab2[1], tab2[2], tab2[3]);
    return (0);
}
