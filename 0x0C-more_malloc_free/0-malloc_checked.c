#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 *
 * Return: pointer to allocted memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}

	return (mem);
}
