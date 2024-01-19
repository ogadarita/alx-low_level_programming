#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates memory block using malloc & free
* @ptr: pointer to previously allocated memory
* @old_size: previous size of allcoated memory
* @new_size: new size of allocated memory
* Return: pointer to reallocated memory (Success) or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t copy_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return (new_ptr);
}
