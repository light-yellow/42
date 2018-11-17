char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j += 1;
		if (to_find[j]== '\0')
			return (&(str[i]));
		i += 1;
	}
	return (0);
}
