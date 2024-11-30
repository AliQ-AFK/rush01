#include "library.h"

/**
 * Function to count how many boxes are visible
 * from a given direction for any row or column
 */
int	count_visible(int line[], int size)
{
	int	index;
	int	max_height;
	int	visible_count;

	index = 1;
	max_height = line[0];
	visible_count = 1;
	while (index < size)
	{
		if (line[index] > max_height)
		{
			max_height = line[index];
			visible_count++;
		}
		index++;
	}
	return (visible_count);
}

/**
 * Function to count how many boxes are visible from the left of a row
 */
int	is_visible_from_left(int row[], int size)
{
	return (count_visible(row, size));
}

/**
 * Function to count how many boxes are visible from the right of a row
 * The row is reversed and sent the count_visible function
 */
int	is_visible_from_right(int row[], int size)
{
	reverse(row, size);
	return (count_visible(row, size));
}

/**
 * Function to count how many boxes are visible from the top of a column
 */
int	is_visible_from_top(int *grid[], int col, int size)
{
	int	*row;
	int	index;

	row = (int *)malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		row[index] = grid[index][col];
		index++;
	}
	return (count_visible(row, size));
}

/**
 * Function to count how many boxes are visible from the bottom of a column
 * The column is reversed and sent the count_visible function
 */
int	is_visible_from_bottom(int *grid[], int col, int size)
{
	int	*row;
	int	index;

	row = (int *)malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		row[index] = grid[index][col];
		index++;
	}
	reverse(row, size);
	return (count_visible(row, size));
}
