#include "main.h"
#include <stdio.h>

/**
* wildcmp - compares two strings with wildcard *
* @s1: first string
* @s2: second string with wildcards
* Return: 1 if strings are identical, otheriwise, 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	return (wildcmp_helper(s1, s2));
}

/**
* wildcmp_helper - complements wildcmp function
* @s1: first string
* @s2: second string with wildcards
* Return: 1 if strings are identical, otherwise, 0
*/

int wildcmp_helper(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
		return (wildcmp(s1, s2 + 1));
		}
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
