#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of array to be created
* @c: character used for initializing elements of the array
* Return: Pointer to array (Success), or NULL (Failure)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
