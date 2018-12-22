int		ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' \
		|| c == '\r' || c == '\v' || c == '\f');
}

unsigned int	ft_str_correct(char *str, char *base)
{
	unsigned int	found;
	char		*tmp;

	if (!str || !*str)
		return (0);
	while (*str)
	{
		tmp = base;
		found = 0;
		while (*tmp && !found)
		{
			if (*str == *tmp)
				found = 1;
			tmp += 1;
		}
		if (!found && !(*str == '-' || *str == '+'))
			break ;
		str += 1;
	}
	return (found);
}

unsigned int	ft_parse_base(char *base)
{
        char    	*tmp;
	unsigned int	base_system;

        if (!base || !base[0] || !base[1])
                return (0);
        while (*base)
        {
                if (*base == '+' || *base == '-')
                        return (0);
                tmp = base + 1;
                while (*tmp)
                {
                        if (*base == *tmp)
                                return (0);
                        tmp += 1;
                }
                base += 1;
		base_system += 1;
        }
        return (base_system);
}

int		ft_convert(char *str, unsigned int base, char *base_values)
{
	int num;
	int digit;

	num = 0;
	while (*str)
	{
		digit = 0;
		while (*str != base_values[digit])
			digit += 1;
		num = (num * base) + digit;
		str += 1;
	}
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int		sign;
	unsigned int	base_system;
	int		result;

	sign = 1;
	base_system = ft_parse_base(base);
	result = 0;
	if (ft_str_correct(str, base) && base_system != 0)
	{
		while (ft_iswhitespace(*str))
			str += 1;
		if (*str == '-')
			sign = -1;
		if (*str == '-' || *str == '+')
			str += 1;
		result = ft_convert(str, base_system, base);
	}
	return (result * sign);
}
