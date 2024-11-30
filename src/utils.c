
#include <stdlib.h>
/**
 * Function to reverse a given array
 * Used in the function for checking the visibility from the right and bottom
 */
void	reverse(int *array, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index < size / 2)
	{
		temp = array[index];
		array[index] = array[size - 1 - index];
		array[size - 1 - index] = temp;
		index++;
	}
}

int	grid_size(int **grid)
{
	int	size;

	size = 0;
	while (grid[size])
		size++;
	return (size);
}

/**
 * Function to split the constraints from the input string
 * into the array of integers
 */
int	*split_constraints(char *input, int input_index, int output_index)
{
	int	*output;
	int	size;

	size = 0;
	while (input[input_index])
	{
		if (input[input_index] >= '0' && input[input_index] <= '9')
			size++;
		input_index++;
	}
	output = (int *)malloc(size * sizeof(int));
	input_index = 0;
	while (input[input_index])
	{
		if (input[input_index] >= '0' && input[input_index] <= '9')
		{
			output[output_index] = input[input_index] - '0';
			output_index++;
		}
		input_index++;
	}
	return (output);
}
