int ft_sqrt(int nb)
{
	int root;

	root = 1;
	if (nb > 0)
	{
		while (root < nb / root)
			root += 1;
		if (root * root == nb)
			return (root);
	}
	return (0);
}
