#include "main.h"
#include <stdio.h>

/**
* print_times_table - Function that prints n times table
* @n: integer for input
* Return: 0
*/

void print_times_table(int n)
{
	int a, b, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			printf("%4d", result);
			if (b < n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
