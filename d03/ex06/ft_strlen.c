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
