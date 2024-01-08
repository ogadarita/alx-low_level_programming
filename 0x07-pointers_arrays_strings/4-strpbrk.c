#include "main.h"
#include <stdio.h>

/**
* _strpbrk - function that searches a string for any set of bytes
* @s: string
* @accept: string
* Return: s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
