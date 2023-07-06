#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be square-rooted
 * Return: the square root of n or -1
 */
int _sqrt_recursion(int n)
{
	int start;
	int stop;
	int mid;
	int result;

	if ((n == 0) || (n == 1))
		return (n);

	start = 1;
	stop = n;

	while (start <= n)
	{
		mid = start + (stop - start) / 2;
		result = mid;
		if (mid == (n / mid))
		{
			result = mid;
			break;
		}
		if (mid < (n / mid))
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			stop = mid - 1;
			result = mid;
		}
	}

	if (result * result == n)
		return (result);
	else
		return (-1);
}

