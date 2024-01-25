#ifndef DOG_H
#define DOG_H

/**
* struct dog - a structure defining dog's features
* @name: pointer to name of dog
* @age: age of dog
* @owner: pointer to owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
