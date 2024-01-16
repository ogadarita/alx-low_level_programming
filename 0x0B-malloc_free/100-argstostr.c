#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all arguments of program
* @ac: first argument;
* @av: second argument;
* Return: NULL or concatenated arguments
*/

char *argstostr(int ac, char **av)
{
	size_t total_length = 0;
	size_t current_position = 0;
	int i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; ++i)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; ++i)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);

		result[current_position] = '\n';
		++current_position;
	}

	result[total_length] = '\0';

	return (result);
}
