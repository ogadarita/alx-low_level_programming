#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value of integer
* @max: maximum value of integer
* Return: pointer to newly created array (Success) or NULL
*/

int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
