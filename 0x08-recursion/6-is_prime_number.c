#include "main.h"

/**
* is_prime_number - function that returns 1 if integer is prime number
* @n: number to be checked
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, n - 1));
	}
}

/**
* is_prime_number_helper - function that checks if n is divisible by divisor
* @n: number to be checked
* @divisor: divisor in the checking process
* Return: 0 or 1
*/

int is_prime_number_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	else
	{
		if (n % divisor == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number_helper(n, divisor - 1));
		}
	}
}
