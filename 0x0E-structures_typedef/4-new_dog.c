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

	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = strdup(name);
	d->owner = strdup(owner);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
