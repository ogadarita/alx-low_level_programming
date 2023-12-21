#include <stdio.h>

/**
* main - program that prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sumnext;
	int i;

	printf("%lu", num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		sumnext = num1 + num2;
		num1 = num2;
		num2 = sumnext;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
