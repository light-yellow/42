#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int	main(void)
{
	int tab[6] = {1, 4, 2, 5, 0, 3};
	printf("unsorted array: [%d, %d, %d, %d, %d, %d]\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_integer_table(tab, 6);
	printf("sorted array: [%d, %d, %d, %d, %d, %d]\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
