#include "main.h"
#include <stddef.h>
#include <stddef.h>

/**
* _memset - function that fills memory with a constant byte
* @s: pointer to the memory location
* @b: the constant byte value that will be used to fill the memory
* @n: number of bytes to filled in the memory area
* Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
