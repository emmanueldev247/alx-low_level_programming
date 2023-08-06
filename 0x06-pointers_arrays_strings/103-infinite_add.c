#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result of the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int num1, num2, sum;
	int len;

	num1 = atoi(n1);
	num2 = atoi(n2);
	sum = num1 + num2;
	sprintf(r, "%d", sum);

	len = 0;
	while (r[len] != '\0')
		len++;
	if (size_r < len)
		return (0);

	return (r);
}
