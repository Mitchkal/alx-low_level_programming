#ifndef dog_H
#define dog_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure contain dog details
 * @name : it name
 * @age: its age
 * @owner:its owner
 * dog_t - type definintion for struct dog
*/
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
