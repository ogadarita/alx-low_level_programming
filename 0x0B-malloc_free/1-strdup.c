#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _strdup - takes a string and returns a pointer to new memory
* @str: string
* Return: NULL or pointer to duplicated string
*/

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
