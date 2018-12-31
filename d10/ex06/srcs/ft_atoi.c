int	ft_atoi(char *str)
{
	int is_negative;
	long result;

	is_negative = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\r' || *str == '\v' || *str == '\f')
		str += 1;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str += 1;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str += 1;
	}
	result *= is_negative;
	return ((int)result);
}
