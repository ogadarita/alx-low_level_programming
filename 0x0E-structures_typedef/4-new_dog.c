#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* new_dog - function that returns a pointer to a type dog_t
* @name: pointer to name of dog
* @age: age of dog
* @owner: pointer to owner of the dog
* Return: new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = (char *)malloc(strlen(name) + 1);
		new_dog->owner = (char *)malloc(strlen(owner) + 1);

		if (new_dog->name != NULL && new_dog->owner != NULL)
		{
			strcpy(new_dog->name, name);
			strcpy(new_dog->owner, owner);
			new_dog->age = age;
		}
		else
		{
			printf("Error: Cannot allocate memory for new_dog name or owner\n");
			free(new_dog->name);
			free(new_dog->owner);
			free(new_dog);
		}
	}
	else
	{
		printf("Error: cannot allocate memory to new_dog.\n");
		return (NULL);
	}
	return (new_dog);
}
