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
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
