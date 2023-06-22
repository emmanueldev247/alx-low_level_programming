#include "main.h"
/**
 * _isdigit - function to check fora digitr
 * @c: Argument jolding character to check
 * Return: Returns 1 if c is a digit, otherwise Return 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
