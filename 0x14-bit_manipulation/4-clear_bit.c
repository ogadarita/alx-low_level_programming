#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to unsigned long int to modify
* @index: index of the bit to set to 0
* Return: 1 (Success), or -1 (Error)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}