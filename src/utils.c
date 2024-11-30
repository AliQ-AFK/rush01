
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

int grid_size(int **grid) {
    int size = 0;

    // Ensure grid is not NULL and iterate until null terminator
    while (grid[size]) {
        size++;
    }

    return size;
}


/**
 * Function to split the constraints from the input string
 * into the array of integers
 */
int *split_constraints(char *input, int input_index, int output_index)
{
    int *output;
    int size = 0;

    // Calculate size
    while (input[input_index])
	{
        if (input[input_index] >= '0' && input[input_index] <= '9')
            size++;
        input_index++;
    }

    // Allocate memory for size + 1 to include the terminator
    output = (int *)malloc((size + 1) * sizeof(int));
    if (!output)
        return NULL;

    // Populate array
    input_index = 0;
    while (input[input_index] && output_index < size)
	{
        if (input[input_index] >= '0' && input[input_index] <= '9')
		{
            output[output_index++] = input[input_index] - '0';
        }
        input_index++;
    }

    // Add termination value
    output[size] = 0;
    return output;
}
