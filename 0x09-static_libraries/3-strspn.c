#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strspn - function that gets the length of a prefix substring
* @s: string
* @accept: string
* Return: length
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return (length);
}
