#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_copy - copy a string to new location
 * @str : the string
 * Return: pointer to new string,or NULL
 */
char *str_copy(char *str)
{
	char *new_str;
	int i, len;

	len = 0;

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}

/**
 * new_dog - creates a new dog
 * @name : its name
 * @age : its age
 * @owner : its owner
 * Return: the newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = str_copy(name);

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = str_copy(owner);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	return (newdog);

}
