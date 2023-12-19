#include "main.h"

/**
* print_last_digit - function that prints last digit of a number
* @x: parameter to determine last digit of a number
* Return: i
*/

int print_last_digit(int x)
{
	int i = x % 10;

	if (x < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
