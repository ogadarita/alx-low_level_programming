#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 if argc is not 2, 2 if num_bytes is negative
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(ptr + i));
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
