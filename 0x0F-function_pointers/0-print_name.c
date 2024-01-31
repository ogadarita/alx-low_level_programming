#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: parameter name to be printed
* @f: Function pointer to the printing function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
