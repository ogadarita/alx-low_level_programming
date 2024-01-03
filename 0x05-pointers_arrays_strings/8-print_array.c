#include "main.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an array of integers
* @a: a pointer
* @n: the number of elements in an array
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("Empty array\n");
		return;
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
