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

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
