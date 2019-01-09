#ifndef FT_H
# define FT_H

void	ft_add(int num1, int num2);
void	ft_sub(int num1, int num2);
void	ft_mul(int num1, int num2);
void	ft_div(int num1, int num2);
void	ft_mod(int num1, int num2);
void	ft_usage(int num1, int num2);
int	ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int	ft_strcmp(const char *s1, const char *s2);

typedef struct	s_opp
{
	char	*operation;
	void	(*function)(int, int);
}		t_opp;

#endif
