#include "variadic_functions.h"

/**
 * print_strings - function that print numbers
 * @separator: separator
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");

			else
				printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
