char	*ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i += 1;
	}
	return (str);
}
