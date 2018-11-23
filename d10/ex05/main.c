#include <stdio.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));

int ft_cmp(int nb1, int nb2)
{
    return (nb1 - nb2);
}

int main(void)
{
    int tab1[3] = {0, 0, 0};
    int tab2[3] = {0, 1, 1};
    int tab3[3] = {0, 1, 2};
    int tab4[3] = {0, 2, 7};
    int tab5[3] = {0, 7, 4};
    int tab6[3] = {42, 42, 42};
    int tab7[3] = {7, 2, 0};

    int (*f)(int, int);
    f = &ft_cmp;
    printf("%d\n", ft_is_sort(tab1, 3, f));
    printf("%d\n", ft_is_sort(tab2, 3, f));
    printf("%d\n", ft_is_sort(tab3, 3, f));
    printf("%d\n", ft_is_sort(tab4, 3, f));
    printf("%d\n", ft_is_sort(tab5, 3, f));
    printf("%d\n", ft_is_sort(tab6, 3, f));
    printf("%d\n", ft_is_sort(tab7, 3, f));
    return (0);
}
