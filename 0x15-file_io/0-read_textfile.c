#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to read
* @letters: Number of letters to read and print
* Return: The actual number of letters read and printed, or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	char *buffer = NULL;
	FILE *file = NULL;

	if (filename  == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer  = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (bytes_read);
}
