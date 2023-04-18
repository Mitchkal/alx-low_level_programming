#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiates a dog structure variable
 * @d : the dog structur
 * @name : the dog name
 * @age : its age
 * @owner : its owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
