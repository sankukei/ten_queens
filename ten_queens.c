#include <unistd.h>
#include <stdlib.h>

char	**init_matrice(int col, int row)
{
	char	**mat;
	int	i;
	int	y;

	i = 0;
	y = 0;
	mat = malloc(col * sizeof(char));
	if (!mat)
		return (NULL);
	while (i <= col)
	{
		mat[i] = malloc(row * sizeof(char));
		while (y <= row)
		{
			mat[i][y] = '0';
			write(1, &mat[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		y = 0;
		i++;
	}
	return (mat);
}

int	check_valid(char **mat, int col, int row)
{
	int	queen;
	int	count;
	int	tmp;
	
	tmp = col;
	count = 0;
	col = 0;
	while (col <= tmp)
	{
		if (mat[col][row] == 'x')
			return (1);
		col++;
	}
	col = tmp;
	tmp = row;
	row = 0;
	while (row <= tmp) 
	{
		if (mat[col][row] == 'x')
			return (1);
		row++;
	}
	return (0);
}

int	main(void)
{
	char	**xd;

	xd = init_matrice(10, 10);
	free(xd);
	return (0);
}

