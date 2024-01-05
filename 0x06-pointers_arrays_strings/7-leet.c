#include <stddef.h>

/**
* leet - function that encodes a string
* @str: string to be encoded
* Return: str
*/

char *leet(char *str)
{
	char *ptr = str;
	char current;

	while (*ptr != '\0')
	{
		current = *ptr;

		switch (current)
		{
			case 'a':
			case 'A':
			
			*ptr = '4';
			break;

			case 'e':
			case 'E':

			*ptr = '3';
			break;

			case 'o':
			case 'O':
			*ptr = '0';
			break;

			case 't':
			case 'T':
			*ptr = '1';
			break;
		}
		ptr++;
	}
	return (str);
}
