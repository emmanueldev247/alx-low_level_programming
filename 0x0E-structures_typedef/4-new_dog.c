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
	int len_n, len_o, i;
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}

	len_n = 0;
	while (name[len_n] != '\0')
		len_n++;

	len_o = 0;
	while (owner[len_o] != '\0')
		len_o++;

	d->name = malloc(len_n + 1);
	d->owner = malloc(len_o + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len_n; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (i = 0; i < len_o; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;

	return (d);
}
