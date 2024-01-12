#include "main.h"
#include <stddef.h>

/**
* _memcpy - function that copies memory area
* @dest: destination pointer
* @src: source pointer
* @n: number of bytes to copy
* Return: destination pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (original_dest);
}
