int	is_available(int *board, int collumn, int row)
{
	int i;

	i = 1;
	while (i <= collumn)
	{
		if (board[collumn - i] == row)
			return (0);
		else if (board[collumn - i] == row - i) 
			return(0);
		else if (board[collumn - i] == row + i)
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_count_possibilities(int *board, int filled)
{
	int row;
	int placements;

	row = 1;
	placements = 0;
	if (filled == 7)
		return (1);
	while (row <= 8)
	{
		if (is_available(board, filled + 1, row))
		{
			board[filled + 1] = row;
			placements += ft_count_possibilities(board, filled + 1);
		}
		row += 1;
	}
	return (placements);
}

int	ft_eight_queens_puzzle(void)
{
	int i;
	int board[8];
	int placements;

	i = 1;
	placements = 0;
	while (i <= 8)
	{
		board[0] = i;
		placements += ft_count_possibilities(board, 0);
		i += 1;
	}
	return (placements);
}
