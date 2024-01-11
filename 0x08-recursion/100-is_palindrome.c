#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* is_palindrome - function that checks if string is palindrome
* @s: string to be checked
* Return: 1 or 0;
*/

int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	if (length == 0)
	{
		return (1);
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		while (!isalnum(s[i]) && i < j)
		{
			i++;
		}

		while (!isalnum(s[j]) && i < j)
		{
			j--;
		}

		if (tolower(s[i]) != tolower(s[j]))
		{
			return (0);
		}
	}
	return (1);
}
