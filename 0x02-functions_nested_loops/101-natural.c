#include <stdio.h>

/**
* main - Function that sums multiples of 3 and 5 for numbers below 1024
* Return: 0
*/

int main(void)
{
	int result = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d\n", result);
	return (0);
}
