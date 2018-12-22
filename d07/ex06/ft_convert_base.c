#include <stdlib.h>

int	ft_convert(char *str, unsigned int base, char *base_values)
{
        int num;
        int digit;

        num = 0;
        while (*str)
        {
                digit = 0;
                while (base_values[digit] && *str != base_values[digit])
                        digit += 1;
                num = (num * base) + digit;
                str += 1;
        }
        return (num);
}

int	ft_atoi_base(char *str, char *base)
{
        int             sign;
        unsigned int    base_system;
        int             result;

        sign = 1;
        base_system = 0;
        result = 0;
	while (base[base_system])
		base_system += 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' \
		|| *str == '\r' || *str == '\v' || *str == '\f')
        	str += 1;
        if (*str == '-')
        	sign = -1;
        if (*str == '-' || *str == '+')
                str += 1;
        result = ft_convert(str, base_system, base);
        return (result * sign);
}

int	ft_nbrlen(int nbr, char *base_to)
{
	unsigned int	num;
	int		len;
	int		base_system;

	len = 0;
	base_system = 0;
	if (nbr < 0)
	{
		num = -nbr;
		len += 1;
	}
	else
		num = nbr;
	while (base_to[base_system])
		base_system += 1;
	while (num > 0)
	{
		num /= base_system;
		len += 1;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base_to, int len)
{
	char		*result;
	int		base;
	unsigned int	num;

	base = 0;
	while (base_to[base])
		base += 1;
	if (nbr < 0)
		num = -nbr;
	else
		num = nbr;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result)
	{
		result[len] = '\0';
		len -= 1;
		while (len >= 0)
		{
			result[len] = base_to[num % base];
			num /= base;
			len -= 1;
		}
		if (nbr < 0)
			result[0] = '-';
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int	num;
	int	result_len;

	result = NULL;
	if (nbr && base_from && base_to)
	{
		num = ft_atoi_base(nbr, base_from);
		result_len = ft_nbrlen(num, base_to);
		result = ft_itoa_base(num, base_to, result_len);
	}
	return (result);
}
