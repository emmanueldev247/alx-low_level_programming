#include "main.h"
/**
 * _isupper - function to check for uppercase character
 * @c: Argument jolding character to check
 * Return: Returns 1 if it is an uppercase character else Return 0
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
