#include "library.h"

int	is_correct_digit(char c, char n)
{
	if (c >= '1' && c <= n)
		return (1);
	else
		return (0);
}

//if first item is space
//if space
//if not digit
//if digit out of range
//if next char of digit is not space or end of str
//if digit is correct
int	is_input_invalid(char *string)
{
	int	i;	

	i = 0;
	if (!*string)
		return (1);
	while (string[i])
	{
		if (string[0] == ' ')
			return (1);
		if (string[i] == ' ')
			i++;
		if (!is_correct_digit(string[i], '9'))
			return (1);
		if (string[i + 1] != ' ' && string[i + 1] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int	is_valid_length(int constraints_size)
{
	if (constraints_size % 4 == 0)
		return (1);
	else
		return (0);
}

int	*get_input_int_array(char *string, int length)
{
	int	*inputs;
	int	i;
	int	j;

	inputs = (int *)malloc(length * sizeof(int));
	if (!inputs)
	{
		return (NULL);
	}
	i = 0;
	j = 0;

	while (string[i])
	{
		if (string[i] >= '1' && string[i] <= '9')
		{
			inputs[j] = string[i] - '0';
			j++;
		}
		i++;
	}
	return (inputs);
}

int	is_valid_range(int *input, int n)
{
	int	index;

	index = 0;
	while (input[index])
	{
		if (!(input[index] >= 1 && input[index] <= n))
			return (0);
		index++;
	}
	return (1);
}
