#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string to be reversed
* Return: void
*/

void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
