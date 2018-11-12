int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len += 1;
		str += 1;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	int	left;
	int	right;
	char	tmp;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left += 1;
		right -= 1;
	}
	return (str);
}
