#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog structure
 * @d : the dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

		return;

	(d->name == NULL) ? printf("Name: (nil)\n")

		: printf("Name: %s\n", d->name);

	(d->owner == NULL) ? printf("Owner: (nil)\n")

		: printf("Owner: %s\n", d->owner);

	(d->age < 0) ? printf("Age: (nil)\n")

		: printf("Age: %.6f\n", d->age);

}
