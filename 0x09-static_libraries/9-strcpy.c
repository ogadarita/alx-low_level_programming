#include "main.h"
#include <stdio.h>

/**
* _strcpy - function that copies string pointed by src
* @dest: pointer
* @src: pointer
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
