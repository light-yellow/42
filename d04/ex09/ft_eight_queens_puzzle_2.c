void	ft_putchar(char ch);

void	ft_printboard(int *board)
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(board[i] + '0');
		i += 1;
	}
	ft_putchar('\n');
}

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

void	ft_count_possibilities(int *board, int filled)
{
	int row;

	row = 1;
	if (filled == 7)
		ft_printboard(board);
	while (row <= 8)
	{
		if (is_available(board, filled + 1, row))
		{
			board[filled + 1] = row;
			ft_count_possibilities(board, filled + 1);
		}
		row += 1;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int i;
	int board[8];

	i = 1;
	while (i <= 8)
	{
		board[0] = i;
		ft_count_possibilities(board, 0);
		i += 1;
	}
}
