#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dog - prints the contents of variable of type struct_dog
* @d: pointer to variable of type struct_dog
* Return: 0
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
