#include "main.h"
/**
 * _isalpha - function to check for alphabetic character
 * @c:  Parameter to check
 * Return: Returns 1 if it is an alphabetic character else Return 0
 */
int _isalpha(int c)
{
	int i, j, ret_val;

	ret_val = 0;
	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			ret_val = 1;
		} else
		{
			for (j = 97; j <= 122; j++)
			{
				if (c == j)
				{
					ret_val = 1;
				}
			}
		}
	}
	return (ret_val);
}
