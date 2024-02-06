#include "lists.h"
#include <stddef.h>

/**
* listint_len - returns the no. of elements in a linked list
* @h: pointer to the head of the list
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
