#include "main.h"

/**
* print_line - a function that draws a straight line
* @n: numbrt of times character _ should be printed
* Return: void
*/

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

