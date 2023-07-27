#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	va_list args;
	func_arg func_array[] = {
		{"c", printchr},
		{"i", printint},
		{"f", printfloat},
		{"s", printstr},
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && format[i] != *(func_array[j].specifier))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			func_array[j].function(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

/**
 * printchr - helper function that prints one character
 * @args: list of arguments pointing to the character to be printed
 *
 * Return: nothing
 */
void printchr(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * printint - helper function that prints a n integer
 * @args: list of arguments pointing to the character to be printed
 *
 * Return: nothing
 */
void printint(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * printfloat - helper function that prints a float
 * @args: list of arguments pointing to the character to be printed
 *
 * Return: nothing
 */
void printfloat(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * printstr - helper function that prints a string
 * @args: list of arguments pointing to the character to be printed
 *
 * Return: nothing
 */
void printstr(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil");
		return;
	}

	printf("%s", str);
}
