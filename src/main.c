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
	return (2);
}

int	main(int argc, char *argv[])
{
	int	constraints_size;
	int	**grid;
	int	*constraints;

	if (!is_valid_input(argc, argv))
		return (3);
		
	constraints = split_constraints(argv[1], 0, 0);
	if (constraints == NULL) {
		write(1, "Error\n", 6);
		return (4);
	}

	constraints_size = 0;
	while (constraints[constraints_size]) {
		constraints_size++;
	}

	if (constraints_size % 4 != 0) {
		write(1, "Error\n", 6);
		free(constraints);
		return (5);
	}

	if (!is_valid_constraints(constraints, constraints_size)) {
		free(constraints);
		return (6);
	}


	grid = (int **)malloc((constraints_size / 4) * sizeof(int *));
	if (!grid)
	{
		free(constraints);
		write(1, "Error\n", 6);
		return (7);
	}

	fill_grid(constraints_size / 4, grid);
	if (solve(grid, 0, 0, constraints)) 
		print_solution(grid, constraints_size / 4);
	else
		write(1, "Error\n", 6);

	for (int i = 0; i < constraints_size / 4; i++) {
		free(grid[i]);
	}
	free(grid);
	free(constraints);
	return (0);
}