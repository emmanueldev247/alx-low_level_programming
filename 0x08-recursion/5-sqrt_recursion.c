#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be square-rooted
 * Return: the square root of n or -1
 */
int _sqrt_recursion(int n)
{
	int result;

	if ((n == 0) || (n == 1))
		return (n);

	result =  sqrt_helper(n, 1, n);

	if (result == -1)
		return (-1);

	if (result * result == n)
		return (result);

	return (-1);
}

/**
 * sqrt_helper - helper function to find the natural square root of a number
 * @n: number to be square-rooted
 * @start: start number for binary search
 * @stop: stop number for binary search
 * Return: the square root of n or -1
 */
int sqrt_helper(int n, int start, int stop)
{
	int mid;

	if (start > stop)
		return (-1);

	mid = start + (stop - start) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid < (n / mid))
		return (sqrt_helper(n, mid + 1, stop));
	else
		return (sqrt_helper(n, start, mid - 1));
}
