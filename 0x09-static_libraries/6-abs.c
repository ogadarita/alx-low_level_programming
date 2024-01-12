#include "main.h"

/**
* _abs - function that computes absolute value of an integer
* @n: the parameter to be checked
* Return: 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
