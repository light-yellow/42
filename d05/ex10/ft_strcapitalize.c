int	ft_is_alnum(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);

}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i += 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && !ft_is_alnum(str[i - 1]))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && ft_is_alnum(str[i - 1]))
            str[i] += 32;

		i += 1;
	}
	return (str);
}
