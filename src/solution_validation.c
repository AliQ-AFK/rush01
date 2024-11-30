#include "library.h"

int	validate_horizontal_visibility(int **grid, int row, int col, int cons[])
{
	int	index;
	int	size;
	int	**row_and_col;
	int	**al_cons;

	size = grid_size(grid);
	row_and_col = allocate_row_and_col(size);
	index = 0;
	al_cons = allocate_constraints(index, size, cons);
	if (col == size - 1)
	{
		index = 0;
		while (index < size)
		{
			row_and_col[0][index] = grid[row][index];
			index++;
		}
		if (is_visible_from_left(row_and_col[0], size) != al_cons[2][row])
			return (0);
		if (is_visible_from_right(row_and_col[0], size) != al_cons[3][row])
			return (0);
	}
	return (1);
}

int	validate_vertical_visibility(int **grid, int row, int col, int cons[])
{
	int	index;
	int	size;
	int	**row_and_col;
	int	**al_cons;

	size = grid_size(grid);
	row_and_col = allocate_row_and_col(size);
	index = 0;
	al_cons = allocate_constraints(index, size, cons);
	if (row == size - 1)
	{
		index = 0;
		while (index < size)
		{
			row_and_col[1][index] = grid[index][col];
			index++;
		}
		if (is_visible_from_top(grid, col, size) != al_cons[0][col])
			return (0);
		if (is_visible_from_bottom(grid, col, size) != al_cons[1][col])
			return (0);
	}
	return (1);
}

int	validate_row(int **grid, int row, int col, int *used)
{
	int	index;
	int	size;

	size = grid_size(grid);
	index = 0;
	while (index <= size)
	{
		used[index] = 0;
		index++;
	}
	index = 0;
	while (index <= col)
	{
		if (used[grid[row][index]])
			return (0);
		used[grid[row][index]] = 1;
		index++;
	}
	return (1);
}

int	validate_col(int **grid, int row, int col, int *used)
{
	int	index;
	int	size;

	size = grid_size(grid);
	index = 0;
	while (index <= size)
	{
		used[index] = 0;
		index++;
	}
	index = 0;
	while (index <= row)
	{
		if (used[grid[index][col]])
			return (0);
		used[grid[index][col]] = 1;
		index++;
	}
	return (1);
}

/**
 * Function to check if the current solution is valid
 * 1. Checks if the current row and column are valid
 * 2. Checks if the visibility constraints are met
 * Returns 1 if the solution is valid and 0 if it is not
 */
int	is_solution_valid(int **grid, int row, int col, int constraints[])
{
	int	index;
	int	size;
	int	**row_and_col;
	int	**allocated_constraints;
	int	**used;

	size = grid_size(grid);
	row_and_col = allocate_row_and_col(size);
	used = allocate_used(size);
	index = 0;
	allocated_constraints = allocate_constraints(index, size, constraints);
	if (!validate_row(grid, row, col, used[0]))
		return (0);
	if (!validate_col(grid, row, col, used[1]))
		return (0);
	if (!validate_horizontal_visibility(grid, row, col, constraints))
		return (0);
	if (!validate_vertical_visibility(grid, row, col, constraints))
		return (0);
	free_memory(allocated_constraints, row_and_col, used);
	return (1);
}
