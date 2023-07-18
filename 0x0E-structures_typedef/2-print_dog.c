#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct d
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	unsigned int i;

	if (d != NULL)
	{
		for (i = 0; i < sizeof(*d) / sizeof(d[0]); i++)
		{
			if (d->name == NULL)
				d->name = "(nil)";

			if (d->owner == NULL)
				d->owner = "(nil)";

			printf("Name: %s\n", d->name);
			printf("Age: %.1f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
