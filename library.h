/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhvosto <vkhvosto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:03:11 by atammur           #+#    #+#             */
/*   Updated: 2024/10/13 22:01:17 by vkhvosto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

//from solution.c
int		solve(int **grid, int row, int col, int *constraints);
void	print_solution(int **grid, int size);
//from input_validation_bonus.c
int		is_correct_digit(char c, char n);
int		is_input_invalid(char *string);
int		is_valid_length(int constraints_size);
int		*get_input_int_array(char *string, int length);
int		is_valid_range(int *input, int n);
// from utils.c
void	reverse(int *tab, int size);
int		grid_size(int **grid);
int		*split_constraints(char *input, int input_index, int output_index);
// from visibility_checks.c
int		count_visible(int line[], int size);
int		is_visible_from_left(int row[], int size);
int		is_visible_from_right(int row[], int size);
int		is_visible_from_top(int *grid[], int col, int size);
int		is_visible_from_bottom(int *grid[], int col, int size);
// solution_validation.c
int		is_solution_valid(int **grid, int row, int col, int constraints[]);
// solution_validation_allocation.c
int		**allocate_constraints(int index, int size, int constraints[]);
int		**allocate_row_and_col(int size);
int		**allocate_used(int size);
void	free_memory(int **alloc_constraints, int **row_and_col, int **used);
//main_bonus.c
int		**fill_grid(int size, int **grid);

#endif
