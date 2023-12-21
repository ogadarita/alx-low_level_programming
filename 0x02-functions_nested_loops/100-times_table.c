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
			if (b == 0)
			{
				printf("%d, ", result);
			}
			else if (b > 0 || b < 10)
			{
				printf("%3d, ", result);
			}
			else if (b >= 10 || b < 100)
			{
				printf("%3d, ", result);
			}
			else if (b >= 100 || b < 1000)
			{
				printf("%4d,", result);
			}
			else if (b == n)
			{
				printf("%d", result);
		
		}
		printf("\n");
	}
}
