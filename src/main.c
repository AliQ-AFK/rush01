#include "library.h"

int	**fill_grid(int size, int **grid)
{
	int	index;
	int	inner_index;

	index = 0;
	while (index < size)
	{
		grid[index] = (int *)malloc(size * sizeof(int));
		inner_index = 0;
		while (inner_index < size)
		{
			grid[index][inner_index] = 0;
			inner_index++;
		}
		index++;
	}
	return (grid);
}

int	is_valid_input(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	if (is_input_invalid(argv[1]))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	is_valid_constraints(int *constraints, int constraints_size)
{
	if (!is_valid_length(constraints_size))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	if (!is_valid_range(constraints, constraints_size / 4))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	constraints_size;
	int	**grid;
	int	*constraints;

	if (!is_valid_input(argc, argv))
		return (1);
	constraints = split_constraints(argv[1], 0, 0);
	constraints_size = 0;
	while (constraints[constraints_size])
		constraints_size++;
	if (!is_valid_constraints(constraints, constraints_size))
		return (1);
	grid = (int **)malloc((constraints_size / 4) * sizeof(int *));
	fill_grid(constraints_size / 4, grid);
	if (solve(grid, 0, 0, constraints)) 
		print_solution(grid, constraints_size / 4);
	else
		write(1, "Error\n", 6);
	free(constraints);
	free(grid);
	return (0);
}
