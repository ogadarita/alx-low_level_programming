#include "main.h"
#include <stdio.h>

/**
* _atoi - function that converts string to integer
* @s: string to be converted
* Return: integer
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
