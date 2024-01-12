#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x, y, product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);
	return (0);
}
