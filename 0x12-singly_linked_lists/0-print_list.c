#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* print_list - prints all elements of a list_t linked list
* @h: pointer to the head of the list_t list
* Return: No. of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		nodes++;
		h = h->next;
	}
	return (nodes);
}

