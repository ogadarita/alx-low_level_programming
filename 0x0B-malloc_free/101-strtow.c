#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* strtow - function that splits strings into words
* @str: string
* Return: words (Success) or NULL (Failure)
*/

	int count_words(char *str);
	int word_length(char *str);

char **strtow(char *str)
{
	int num_words;
	char **result;
	int word_index;
	int word_len;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);

	result = (char **)malloc((num_words + 1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}
	word_index = 0;

	while (*str)
	{
		while (*str && *str == ' ')
		{
			++str;
		}

		if (*str == '\0')
		{
			break;
		}
	word_len = word_length(str);

	result[word_index] = (char *)malloc((word_len + 1) * sizeof(char));

	if (result[word_index] == NULL)
	{
		for (i = 0; i < word_index; ++i)
		{
			free(result[i]);
		}
		free(result);
		return (NULL);
	}

	strncpy(result[word_index], str, word_len);
	result[word_index][word_len] = '\0';

	str += word_len;
	++word_index;
	}

	result[word_index] = NULL;

	return (result);
}

/**
* count_words - counts the number of words in a string
* @str: string
* Return: number of words (count)
*/

int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			++count;
		}

		++str;
	}
	return (count);
}

/**
* word_length - determines the length of a word
* @str: string
* Return: word length
*/

int word_length(char *str)
{
	int length = 0;

	while (*str && *str != ' ')
	{
		++length;
		++str;
	}

	return (length);
}
