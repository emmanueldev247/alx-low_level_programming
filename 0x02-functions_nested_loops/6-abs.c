#include "main.h"
/**
 * _abs - function that prints the sign of a number
 * @n:  Parameter to check
 * Return: Returns 1 or 0 or -1
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	} else if (n > 0)
	{
		n = n;
	}
	return (n);
}
