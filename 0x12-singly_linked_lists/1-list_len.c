#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* list_len - Returns the number of elements in a list_t list.
* @h: Pointer to the head of the list
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
