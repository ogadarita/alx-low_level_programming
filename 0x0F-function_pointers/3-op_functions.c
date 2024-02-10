#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int op_add - adds two integers
* @a: first integer
* @b: second integer
* Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* int op_sub - subtracts two integers
* @a: first integer
* @b: second integer
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* int op_mul - multiplies two integers
* @a: first integer
* @b: second integer
* Return: the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* int op_div - divides two integers
* @a: first integer
* @b: second integer
* Return: the result of the division of a and b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* int op_mod - calculates the remainder of the division of two integers
* @a: first integer
* @b: second integer
* Return: the remainder of the division of a and b
*/

int op_mod(int a, int b)
{
	return (a % b);
}

