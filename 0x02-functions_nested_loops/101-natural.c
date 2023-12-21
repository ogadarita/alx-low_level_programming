#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	int n, result;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d\n", result);
}
