#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
* malloc_checked -function that allocates memory using `malloc`
* @b: number of bytes to allocate
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed. Exiting with status 98. \n");
		exit(98);
	}
	return (ptr);
}
