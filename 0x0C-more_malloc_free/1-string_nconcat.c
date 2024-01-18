#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: no. of bytes to be assigned
* Return: pointer (Success) or NULL (fail)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + n] = '\0';

	return (result);
}
