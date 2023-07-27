#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct func - struct for specifiers and function pair
 * @specifier: specifier
 * @function: function
 */
typedef struct func
{
	char *specifier;
	void (*function)(va_list);
} func_arg;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printint(va_list args);
void printchr(va_list args);
void printstr(va_list args);
void printfloat(va_list args);

#endif
