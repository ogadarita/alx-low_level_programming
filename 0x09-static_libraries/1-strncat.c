#include "main.h"
#include <stddef.h>

/**
* _strncat - function that concatenates two strings
* @dest: first string
* @src: second string
* @n: number of bytes
* Return: pointer to the result string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i;

	while (*dest_end != '\0')
	{
		dest_end++;
	}


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_end[i] = src[i];
	}
	dest_end[i] = '\0';

	return (dest);
}


