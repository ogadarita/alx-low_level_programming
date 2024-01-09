#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* set_string - function that sets the value of a pointer to a char
* @s: a pointer to a pointer to char(char **s)
* @to: input string
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = malloc(strlen(to) + 1);

	if (*s != NULL)
	{
		strcpy(*s, to);
	}
	else
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
}
