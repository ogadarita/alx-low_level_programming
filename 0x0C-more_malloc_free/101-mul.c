#include <stdio.h>
#include <stdlib.h>

/**
* isNumeric - function to check if a string is composed of digits
* @str: string to check
* Return: 1 (is a digit) or 0 (not a digit)
*/

int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
* mul - function to multiply two positive numbers
* @num1: first number
* @num2: second number
* Return: void
*/

void mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j;
	int *result;
	int start = 0;

	while (num1[len1] != '\0')
		len1++;

	while (num2[len2] != '\0')
		len2++;

	result = (int *)malloc((len1 + len2) * sizeof(int));

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
	while (start < len1 + len2 && result[start] == 0)
		start++;

	if (start == len1 + len2)
		printf("0\n");

	else
	{
		for (i = start; i < len1 + len2; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
	free(result);
}

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: 98 (exit status) or 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	mul(argv[1], argv[2]);
	return (0);
}
