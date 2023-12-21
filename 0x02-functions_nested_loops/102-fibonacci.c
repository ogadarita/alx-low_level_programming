#include <stdio.h>

/**
* main - program that prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sumnext;
	int i;

	printf("%d, ", num1);
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", num2);
		sumnext = num1 + num2;
		num1 = num2;
		num2 = sumnext;
	}
	printf("\n");
	return (0);
}
