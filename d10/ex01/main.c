#include <unistd.h>

void	ft_putnbr(int nb);
void    ft_foreach(int *tab, int length, void(*f)(int));


int	main(void)
{
    int tab[2] = {1, 8};
	void    (*f)(int);
    f = &ft_putnbr;
    ft_foreach(tab, 2, f);
    return (0);
}
