#include <stdio.h>
#include <math.h>

/**
* main - program that prints the largest prime factor
* Return: 0
*/

int main(void)
{
	long number = 612852475143;
	long i, max;

	while (number % 2 == 0)
	{
		number /= 2;
		max = 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			number /= i;
			max = i;
		}
	}

	if (number > 2)
	{
		max = number;
	}

	printf("%ld\n", max);

	return (0);
}
