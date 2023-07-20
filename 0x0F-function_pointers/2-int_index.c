#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array passed
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size < 1)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i, ret;

		for (i = 0; i < size; i++)
		{
			ret = cmp(array[i]);
			if (ret != 0)
				return (i);
		}
	}
	return (-1);
}
