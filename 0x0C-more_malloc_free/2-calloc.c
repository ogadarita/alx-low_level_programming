#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of array members
* @size: size of array
* Return: pointer to allocated memory (Success) or NULL (fail)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
