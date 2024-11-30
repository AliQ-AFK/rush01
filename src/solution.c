#include "library.h"

/**
 * Function that solves the puzzle using backtracking
 * Checks the base case where the row is equal to the size of
 *   the grid to finish the recursion
 * Checks if the current column is equal to the size of the grid
 *   to move to the next row
 * Tries all possible values for the current cell and checks
 *   if the solution is valid
 * If the solution is valid, it moves to the next cell
 * If the solution is not valid, it resets the cell to 0 and tries the next value
 * Returns 1 if a solution is found and 0 if no solution exists
 */
int	solve(int **grid, int row, int col, int *constraints)
{
	int	value;
	int	size;

	size = grid_size(grid);
	if (row == size)
		return (1);
	if (col == size)
		return (solve(grid, row + 1, 0, constraints));
	value = 1;
	while (value <= size)
	{
		grid[row][col] = value;
		if (is_solution_valid(grid, row, col, constraints))
		{
			if (solve(grid, row, col + 1, constraints))
				return (1);
		}
		grid[row][col] = 0;
		value++;
	}
	return (0);
}

/**
 * Function to print the solution grid
 */
void	print_solution(int **grid, int size)
{
	int	value;
	int	outer_index;
	int	inner_index;

	outer_index = 0;
	inner_index = 0;
	while (outer_index < size)
	{
		while (inner_index < size)
		{
			value = grid[outer_index][inner_index] + '0';
			write(1, &value, 1);
			if (inner_index != size - 1)
				write(1, " ", 1);
			inner_index++;
		}
		write(1, "\n", 1);
		inner_index = 0;
		outer_index++;
	}
}
