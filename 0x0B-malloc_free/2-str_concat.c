#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* str_concat - function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: NULL or concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	size_t length;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1) + strlen(s2);

	result = (char *)malloc((length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
