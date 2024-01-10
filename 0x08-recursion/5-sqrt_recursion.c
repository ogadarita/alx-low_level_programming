#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number to square root
* Return: square root of number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 0));
	}
}

/**
* _sqrt_recursion_helper - returns natural square root of a number
* @n: number to square root
* @sqrtNum: possible root number
* Return: square root of number
*/

int _sqrt_recursion_helper(int n, int sqrtNum)
{
	if (sqrtNum * sqrtNum == n)
	{
		return (sqrtNum);
	}
	else if (sqrtNum * sqrtNum > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, sqrtNum + 1));
	}
}
