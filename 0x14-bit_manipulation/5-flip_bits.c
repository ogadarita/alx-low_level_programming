#include "main.h"

/**
* flip_bits - returns the no. of bits needed to flip to get from one
* number to another
* @n: first number
* @m : second number
* Return: no. of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;
	while (x > 0)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
