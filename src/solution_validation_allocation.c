#include "library.h"
int **allocate_constraints(int index, int size, int constraints[])
{
    int **allocated_constraints = (int **)malloc(4 * sizeof(int *));
    if (!allocated_constraints)
        return NULL;

    allocated_constraints[0] = (int *)malloc(size * sizeof(int));
    if (!allocated_constraints[0])
	{
        free(allocated_constraints);
        return NULL;
    }

    allocated_constraints[1] = (int *)malloc(size * sizeof(int));
    if (!allocated_constraints[1])
	{
        free(allocated_constraints[0]);
        free(allocated_constraints);
        return NULL;
    }

    allocated_constraints[2] = (int *)malloc(size * sizeof(int));
    if (!allocated_constraints[2])
	{
        free(allocated_constraints[0]);
        free(allocated_constraints[1]);
        free(allocated_constraints);
        return NULL;
    }

    allocated_constraints[3] = (int *)malloc(size * sizeof(int));
    if (!allocated_constraints[3])
	{
        free(allocated_constraints[0]);
        free(allocated_constraints[1]);
        free(allocated_constraints[2]);
        free(allocated_constraints);
        return NULL;
    }

    for (index = 0; index < size; index++)
	{
        allocated_constraints[0][index] = constraints[index];
        allocated_constraints[1][index] = constraints[size + index];
        allocated_constraints[2][index] = constraints[size * 2 + index];
        allocated_constraints[3][index] = constraints[size * 3 + index];
    }

    return allocated_constraints;
}

int	**allocate_row_and_col(int size)
{
	int	*current_row;
	int	*current_col;
	int	**row_and_col;

	current_row = (int *)malloc(size * sizeof(int));
	current_col = (int *)malloc(size * sizeof(int));
	row_and_col = (int **)malloc(2 * sizeof(int *));
	row_and_col[0] = current_row;
	row_and_col[1] = current_col;
	return (row_and_col);
}

int	**allocate_used(int size)
{
	int	*used_row;
	int	*used_col;
	int	**used;

	used_row = (int *)malloc((size + 1) * sizeof(int));
	used_col = (int *)malloc((size + 1) * sizeof(int));
	used = (int **)malloc(2 * sizeof(int *));
	used[0] = used_row;
	used[1] = used_col;
	return (used);
}

void	free_memory(int **alloc_constraints, int **row_and_col, int **used)
{
	free(alloc_constraints);
	free(row_and_col);
	free(used);
}
