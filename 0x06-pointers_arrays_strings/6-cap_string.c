#include "main.h"
#include <ctype.h>

/**
* cap_string - function that capitalizes all words of a string
* @str: string
* Return: str
*/

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] != '\0' && islower((unsigned char)str[0]))
	{
		str[0] = toupper((unsigned char)str[0]);
	}

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"'
		|| str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{
			i++;

			if (str[i] != '\0' && islower((unsigned char)str[i]))
			{
				str[i] = toupper((unsigned char)str[i]);
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
