#include "main.h"
/**
 * _islower - function to check for lowercase description
 * @c:  Parameter to check
 * Return: Returns 1 if lower else Return 0
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
