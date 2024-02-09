#include "main.h"
#include <stdio.h>

/**
* print_binary - prints the binary representation of a number
* @n: number to print in binary
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((mask & n) == 0)
		mask = mask >> 1;

	while (mask != 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
