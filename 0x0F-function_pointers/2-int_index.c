#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer in an array
* @array: pointer to the array of integers
* @size: number of elements in the array
* @cmp: pointer to the comparison function
* Return: Index of the first element for which cmp does not return 0,
*	-1 if no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	else if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
