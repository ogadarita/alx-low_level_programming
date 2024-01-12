#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: dest string
* @src: src string
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	char *result = dest;
	int n;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
