#include  <stdio.h>
#include  <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: returns the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;
	if (d->age == NULL)
	{
		free(d);
		return (NULL);

	d->owner = owner;
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);

	return (d);
}
