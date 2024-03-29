#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 (Success), -1 (failure)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
