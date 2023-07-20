#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

}
