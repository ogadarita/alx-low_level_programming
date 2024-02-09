#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* n: pointer to unsigned long int to modify
* index: index of the bit to set, starting from 0
* Return: 1 (Success), or -1 (Error)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
