#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* is_palindrome - function that checks if string is palindrome
* @s: string to be checked
* Return: 1 if palindrome, or 0;
*/

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
* is_palindrome_helper - function that compliments is_palindrome
* @s: input string
* @start: starting index
* @end: ending index
* Return: 1 if palindrome, otherwise, 0;
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}
