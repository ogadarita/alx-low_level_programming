#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the start of a listint_t list
* @head: pointer to the address of the head of the list
* @n: integer to be added to the new node
* Return: address of new element, NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*Declare and allocate memory for the new node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	/*Declare and assign a temporary pointer to traverse nodes*/
	listint_t *temp = *head;

	/*if memory allocation fails, return NULL*/
	if (new_node == NULL)
		return (NULL);

	/*Assign data and set the next pointer of the new node*/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/*If the list is empty, make the new node the head*/
		*head = new_node;
	}
	else
	{
		/*Traverse the list to find the last node*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/*Assign the new node as the last node*/
		temp->next = new_node;
	}
	return (new_node); /*Return the address of the new element*/
}
