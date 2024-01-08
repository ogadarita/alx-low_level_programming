#include "main.h"
#include <stddef.h>

/**
* _strchr - function that locates the character of a string
* @s: pointer to the first character of a string
* @c: single character that the function searches within the string `s`
* Return: s or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
