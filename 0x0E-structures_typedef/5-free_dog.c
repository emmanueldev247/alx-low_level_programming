#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dog
 * @d: passed struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);
}
