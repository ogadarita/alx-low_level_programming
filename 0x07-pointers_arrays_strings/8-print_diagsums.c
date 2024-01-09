#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of two diagonals
* @a: pointer to the square matrix
* @size: size of the matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
