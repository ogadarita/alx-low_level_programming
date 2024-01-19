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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	result = malloc(sizeof(char) * (len1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[len1 + i] = s2[i];
		result[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[len1 + i] = s2[i];
		result[len1 + i] = '\0';
	}
	return (result);
}
