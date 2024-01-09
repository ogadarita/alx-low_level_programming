#include "main.h"
#include <stdio.h>

/**
* _strstr - function that locates a substring
* @haystack: main text for searching the substring
* @needle: the substring we are looking for
* Return: haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
