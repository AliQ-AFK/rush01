/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_validation_allocation.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhvosto <vkhvosto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:17:50 by vkhvosto          #+#    #+#             */
/*   Updated: 2024/10/13 22:28:59 by vkhvosto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	**allocate_constraints(int index, int size, int constraints[])
{
	int	*top_constraints;
	int	*bottom_constraints;
	int	*left_constraints;
	int	*right_constraints;
	int	**allocated_constraints;

	allocated_constraints = (int **)malloc(4 * sizeof(int *));
	top_constraints = (int *)malloc(size * sizeof(int));
	bottom_constraints = (int *)malloc(size * sizeof(int));
	left_constraints = (int *)malloc(size * sizeof(int));
	right_constraints = (int *)malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		top_constraints[index] = constraints[index];
		bottom_constraints[index] = constraints[size + index];
		left_constraints[index] = constraints[size * 2 + index];
		right_constraints[index] = constraints[size * 3 + index];
		index++;
	}
	allocated_constraints[0] = top_constraints;
	allocated_constraints[1] = bottom_constraints;
	allocated_constraints[2] = left_constraints;
	allocated_constraints[3] = right_constraints;
	return (allocated_constraints);
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
