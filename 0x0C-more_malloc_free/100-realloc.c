#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function to clone realloc
 * @ptr: previous malloc'd memory
 * @old_size: size of ptr
 * @new_size: size of new address
 *
 * Return: pointer to realloc'd mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem;
	unsigned int stop, i;

	char *ptr2 = (char *)ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newmem = malloc(new_size);
		if (newmem == NULL)
			return (NULL);
		free(ptr);
		return (newmem);
	}

	if (new_size > old_size)
		stop = old_size;
	else
		stop = new_size;

	newmem = malloc(new_size);
	if (newmem == NULL)
		return (NULL);

	for (i = 0; i < stop; i++)
		newmem[i] = ptr2[i];

	free(ptr);
	return (newmem);
}
