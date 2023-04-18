#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name : its name
 * @age : its age
 * @owner : its owner
 * Return: the newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->owner = owner;
	newdog->age = age;

	return (newdog);
}
