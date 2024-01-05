#include "main.h"
#include <ctype.h>

/**
* string_toupper - function that converts lowercase letters to uppercase
* @str: string to be converted
* Return: uppercase string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper((unsigned char)str[i]);
		i++;
	}

	return (str);
}
