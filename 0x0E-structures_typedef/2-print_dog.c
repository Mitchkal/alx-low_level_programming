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

	printf("Age: %.6f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")

		: printf("Owner: %s\n", d->owner);

}
