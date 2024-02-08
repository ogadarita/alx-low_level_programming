#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		result <<= 1;
		if (b[a] == '1')
			result += 1;
	}
	return (result);
}
