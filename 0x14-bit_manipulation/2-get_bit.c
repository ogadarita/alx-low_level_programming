#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: the number to get the bit from
* @index: the index of the bit to retrieve
* Return: value of the bit at the index, or -1 if an error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
