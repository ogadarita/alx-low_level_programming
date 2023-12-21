#include <stdio.h>

/**
* main - Program that finds and prints the sum of even-valued terms
* Return: 0
*/

int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int nextSum;
	int sum = 0;

	while (nextSum <= limit)
	{
		if (num2 % 2 == 0)
		{
			sum += num2;
		}
			nextSum = num1 + num2;
			num1 = num2;
			num2 = nextSum;
	}
	printf("%d\n", sum);
	return (0);
}
