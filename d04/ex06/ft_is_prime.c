int	ft_is_prime(int nb)
{
	int divider;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	else
	{
		divider = 3;
		while (divider <= nb / divider)
		{
			if (nb % divider == 0)
				return (0);
			divider += 2;
		}
	}
	return (1);
}
