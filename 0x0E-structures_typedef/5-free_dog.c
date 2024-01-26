#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_dog - a function that frees dogs
* @d: pointer to variable dog_t
* Return: 0
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
