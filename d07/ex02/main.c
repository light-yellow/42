#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *ptr;
    int len = ft_ultimate_range(&ptr, -3, 3);
    printf("the len is: %d\n", len);
    printf("the array of ints between -3 and 3 is: {%d, %d, %d, %d, %d, %d}", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5]);
    return (0);
}
